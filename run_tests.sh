#!/usr/bin/env bash

set -euo pipefail

readonly project_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
readonly build_dir="${BUILD_DIR:-${project_dir}/cmake-build-debug}"

ctest --test-dir "${build_dir}" --output-on-failure
