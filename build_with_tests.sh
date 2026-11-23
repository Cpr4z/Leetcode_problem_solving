#!/usr/bin/env bash

set -euo pipefail

readonly project_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
readonly build_dir="${BUILD_DIR:-${project_dir}/cmake-build-debug}"

generator_args=()
if command -v ninja >/dev/null 2>&1; then
    generator_args=(-G Ninja)
fi

cmake \
    -S "${project_dir}" \
    -B "${build_dir}" \
    "${generator_args[@]}" \
    -DBUILD_TESTING=ON \
    -DCMAKE_BUILD_TYPE="${BUILD_TYPE:-Debug}"

cmake --build "${build_dir}" --parallel
ctest --test-dir "${build_dir}" --output-on-failure
