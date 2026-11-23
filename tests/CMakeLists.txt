cmake_minimum_required(VERSION 3.29.6)

project(LeetcodeTests LANGUAGES CXX)

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

function(add_solution_test target source solution)
    add_executable(${target} ${source})
    target_link_libraries(${target} PRIVATE ${solution} GTest::gtest_main GTest::gmock)
    gtest_discover_tests(${target})
endfunction()

add_solution_test(min_moves_to_tests
    ${CMAKE_SOURCE_DIR}/other_tasks/MinMovesTo/tests.cpp
    min_moves_to_solution
)
add_solution_test(min_moves_to_2_tests
    ${CMAKE_SOURCE_DIR}/other_tasks/MinMovesTo2/tests.cpp
    min_moves_to_2_solution
)
add_solution_test(roman_to_integer_tests
    ${CMAKE_SOURCE_DIR}/other_tasks/RomanToInteger/tests.cpp
    roman_to_integer_solution
)
add_solution_test(valid_parentheses_tests
    ${CMAKE_SOURCE_DIR}/stack/valid_parentheses/tests.cpp
    valid_parentheses_solution
)
add_solution_test(disappeared_numbers_tests
    ${CMAKE_SOURCE_DIR}/array_and_matrix/disappeared_numbers/tests.cpp
    disappeared_numbers_solution
)
add_solution_test(valid_pairs_arrangement_tests
    ${CMAKE_SOURCE_DIR}/graphs/validPairsArrangement/tests.cpp
    valid_pairs_arrangement_solution
)

add_solution_test(two_sum_tests
    ${CMAKE_SOURCE_DIR}/hash_table/two_sum/tests.cpp
    two_sum_solution
)

add_solution_test(linked_list_cycle_tests
    ${CMAKE_SOURCE_DIR}/linked_list/linked_list_cycle/tests.cpp
    linked_list_cycle_solution
)

add_solution_test(reversed_linked_list_tests
        ${CMAKE_SOURCE_DIR}/linked_list/reversed_linked_list/tests.cpp
        reversed_linked_list_solution
)

add_solution_test(binary_search_tests
        ${CMAKE_SOURCE_DIR}/binary_search/binary_search_base/tests.cpp
        binary_search_solution
)

add_solution_test(search_in_2d_matrix_tests
        ${CMAKE_SOURCE_DIR}/binary_search/search_in_2d_matrix/tests.cpp
        search_in_2d_matrix_solution
)

add_solution_test(higher_or_lower_tests
        ${CMAKE_SOURCE_DIR}/binary_search/higher_or_lower/tests.cpp
        higher_or_lower_solution
)

add_solution_test(single_number_tests
        ${CMAKE_SOURCE_DIR}/array_and_matrix/single_number/tests.cpp
        single_number_solution
)

add_solution_test(valid_anagram_tests
        ${CMAKE_SOURCE_DIR}/hash_table/valid_anagram/tests.cpp
        valid_anagram_solution
)

add_solution_test(4_sum_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/4Sum/tests.cpp
        4_sum_solution
)

add_solution_test(find_duplicates_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/find_duplicates/tests.cpp
        find_duplicates_solution
)

add_solution_test(find_all_anagrams_tests
        ${CMAKE_SOURCE_DIR}/hash_table/find_all_anagrams/tests.cpp
        find_all_anagrams_solution
)

add_solution_test(find_symmetry_line_tests
        ${CMAKE_SOURCE_DIR}/hash_table/find_symmetry_line/tests.cpp
        find_symmetry_line_solution
)

add_solution_test(convoluted_route_tests
        ${CMAKE_SOURCE_DIR}/hash_table/convoluted_route/tests.cpp
        convoluted_route_solution
)

add_solution_test(group_anagrams_tests
        ${CMAKE_SOURCE_DIR}/hash_table/group_anagrams/tests.cpp
        group_anagrams_solution
)

add_solution_test(group_numbers_anagrams_tests
        ${CMAKE_SOURCE_DIR}/hash_table/group_numbers_anagrams/tests.cpp
        group_numbers_anagrams_solution
)

add_solution_test(common_prefix_2_arrays_tests
        ${CMAKE_SOURCE_DIR}/hash_table/common_prefix_two_arrays/tests.cpp
        common_prefix_2_arrays_solution
)

add_solution_test(sequence_with_k_sum_tests
        ${CMAKE_SOURCE_DIR}/array_and_matrix/sequence_with_k_sum/tests.cpp
        sequence_with_k_sum_solution
)

add_solution_test(sum_two_big_numbers_tests
        ${CMAKE_SOURCE_DIR}/array_and_matrix/sum_two_big_numbers/tests.cpp
        sum_two_big_numbers_solution
)

add_solution_test(merge_intervals_tests
        ${CMAKE_SOURCE_DIR}/points_and_segments/merge_intervals/tests.cpp
        merge_intervals_solution
)

add_solution_test(summarize_two_graphics_tests
        ${CMAKE_SOURCE_DIR}/points_and_segments/summarize_graphics/tests.cpp
        summarize_graphics_solution
)

add_solution_test(is_almost_palindrome_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/is_almost_palindrome/tests.cpp
        is_almost_palindrome_solution
)

add_solution_test(min_count_of_meeting_rooms_tests
        ${CMAKE_SOURCE_DIR}/points_and_segments/min_count_of_meeting_rooms/tests.cpp
        min_count_of_meeting_rooms_solution
)

add_solution_test(right_palindrome_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/right_palindrome/tests.cpp
        right_palindrome_solution
)

add_solution_test(uncertain_search_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/uncertain_search/tests.cpp
        uncertain_search_solution
)

add_solution_test(one_side_difference_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/one_side_difference/tests.cpp
        one_side_difference_solution
)

add_solution_test(scalar_product_tests
        ${CMAKE_SOURCE_DIR}/array_and_matrix/scalar_product/tests.cpp
        scalar_product_solution
)

add_solution_test(is_similar_strings_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/is_similar_strings/tests.cpp
        is_similar_strings_solution
)

add_solution_test(move_zeroes_to_end_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/move_zeroes_to_end/tests.cpp
        move_zeroes_to_end_solution
)

add_solution_test(compress_spaces_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/compress_spaces/tests.cpp
        compress_spaces_solution
)

add_solution_test(urlify_string_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/urlify_string/tests.cpp
        urlify_string_solution
)

add_solution_test(remove_smiley_faces_tests
        ${CMAKE_SOURCE_DIR}/stack/remove_smiley_faces/tests.cpp
        remove_smiley_faces_solution
)

add_solution_test(unite_sequence_numbers_tests
        ${CMAKE_SOURCE_DIR}/non_overlapping_windows/unite_sequence_numbers/tests.cpp
        unite_sequence_numbers_solution
)

add_solution_test(find_max_1_sequence_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/find_max_1_sequence/tests.cpp
        find_max_1_sequence_solution
)

add_solution_test(convolution_into_ranges_tests
        ${CMAKE_SOURCE_DIR}/non_overlapping_windows/convolution_into_ranges/tests.cpp
        convolution_into_ranges_solution
)

add_solution_test(best_spot_on_parking_tests
        ${CMAKE_SOURCE_DIR}/non_overlapping_windows/best_spot_on_parking/tests.cpp
        best_spot_on_parking_solution
)

add_solution_test(coding_repeats_tests
        ${CMAKE_SOURCE_DIR}/non_overlapping_windows/coding_repeats/tests.cpp
        coding_repeats_solution
)

add_solution_test(longest_subset_tests
        ${CMAKE_SOURCE_DIR}/non_overlapping_windows/longest_subset/tests.cpp
        longest_subset_solution
)

add_solution_test(max_1_segment_with_deletion_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/max_1_segment_with_deletion/tests.cpp
        max_1_segment_with_deletion_solution
)

add_solution_test(longest_subarray_with_limit_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/longest_subarray_with_limit/tests.cpp
        longest_subarray_with_limit_solution
)

add_solution_test(count_pairs_with_diff_k_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/count_pairs_with_diff_k/tests.cpp
        count_pairs_with_diff_k_solution
)

add_solution_test(count_of_indexes_couple_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/count_of_indexes_couple/tests.cpp
        count_of_indexes_couple_solution
)

add_solution_test(substrings_with_full_alphabet_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/substrings_with_full_alphabet/tests.cpp
        substrings_with_full_alphabet_solution
)

add_solution_test(longest_stock_growth_tests
        ${CMAKE_SOURCE_DIR}/non_overlapping_windows/longest_stock_growth/tests.cpp
        longest_stock_growth_solution
)

add_solution_test(longest_gene_sequence_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/longest_gene_sequence/tests.cpp
        longest_gene_sequence_solution
)

add_solution_test(longest_unique_gene_sequence_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/longest_unique_gene_sequence/tests.cpp
        longest_unique_gene_sequence_solution
)

add_solution_test(check_mutable_virus_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/check_mutable_virus/tests.cpp
        check_mutable_virus_solution
)


add_solution_test(counting_pairs_of_indexes_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/counting_pairs_of_indexes/tests.cpp
        counting_pairs_of_indexes_solution
)

add_solution_test(fabricated_report_tests
        ${CMAKE_SOURCE_DIR}/overlapping_windows/fabricated_report_k/tests.cpp
        fabricated_report_solution
)

add_solution_test(slingshot_shots_tests
        ${CMAKE_SOURCE_DIR}/points_and_segments/slingshot_shots/tests.cpp
        slingshot_shots_solution
)

add_solution_test(bus_capacity_tests
        ${CMAKE_SOURCE_DIR}/points_and_segments/bus_capacity/tests.cpp
        bus_capacity_solution
)

add_solution_test(overlapping_intervals_tests
        ${CMAKE_SOURCE_DIR}/points_and_segments/overlapping_intervals/tests.cpp
        overlapping_intervals_solution
)

add_solution_test(find_meeting_room_tests
        ${CMAKE_SOURCE_DIR}/points_and_segments/find_meeting_room/tests.cpp
        find_meeting_room_solution
)

add_solution_test(valid_sudoku_tests
        ${CMAKE_SOURCE_DIR}/hash_table/valid_sudoku/tests.cpp
        valid_sudoku_solution
)

add_solution_test(isomorphic_strings_tests
        ${CMAKE_SOURCE_DIR}/hash_table/isomorphic_strings/tests.cpp
        isomorphic_strings_solution
)

add_solution_test(tourists_route_tests
        ${CMAKE_SOURCE_DIR}/hash_table/tourist's_route/tests.cpp
        tourists_route_solution
)

add_solution_test(sort_012_tests
        ${CMAKE_SOURCE_DIR}/hash_table/sort_012/tests.cpp
        sort_012_solution
)

add_solution_test(palindrome_permutation_tests
        ${CMAKE_SOURCE_DIR}/hash_table/palindrome_permutation/tests.cpp
        palindrome_permutation_solution
)

add_solution_test(hirsch_index_tests
        ${CMAKE_SOURCE_DIR}/hash_table/hirsch_index/tests.cpp
        hirsch_index_solution
)

add_solution_test(top_k_frequency_elements_tests
        ${CMAKE_SOURCE_DIR}/hash_table/top_k_frequency_elements/tests.cpp
        top_k_frequency_elements_solution
)

add_solution_test(find_competition_winner_tests
        ${CMAKE_SOURCE_DIR}/hash_table/find_competition_winner/tests.cpp
        find_competition_winner_solution
)

add_solution_test(find_missing_char_tests
        ${CMAKE_SOURCE_DIR}/hash_table/find_missing_char/tests.cpp
        find_missing_char_solution
)

add_solution_test(longest_palindrome_tests
        ${CMAKE_SOURCE_DIR}/hash_table/longest_palindrome/tests.cpp
        longest_palindrome_solution
)

add_solution_test(first_unique_symbol_tests
        ${CMAKE_SOURCE_DIR}/hash_table/first_unique_symbol/tests.cpp
        first_unique_symbol_solution
)

add_solution_test(search_in_sorted_array_tests
        ${CMAKE_SOURCE_DIR}/binary_search/search_in_sorted_array/tests.cpp
        search_in_sorted_array_solution
)

add_solution_test(insert_in_sorted_array_tests
        ${CMAKE_SOURCE_DIR}/binary_search/insert_in_sorted_array/tests.cpp
        insert_in_sorted_array_solution
)

add_solution_test(find_minimum_carry_load_tests
        ${CMAKE_SOURCE_DIR}/binary_search/find_minimum_carry_load/tests.cpp
        find_minimum_carry_load_solution
)

add_solution_test(find_first_and_last_pos_tests
        ${CMAKE_SOURCE_DIR}/binary_search/find_first_and_last_pos/tests.cpp
        find_first_and_last_pos_solution
)

add_solution_test(search_in_rotated_array_tests
        ${CMAKE_SOURCE_DIR}/binary_search/search_in_rotated_array/tests.cpp
        search_in_rotated_array_solution
)

add_solution_test(find_k_closest_elements_tests
        ${CMAKE_SOURCE_DIR}/binary_search/find_k_closest_elements/tests.cpp
        find_k_closest_elements_solution
)

add_solution_test(count_nodes_tests
        ${CMAKE_SOURCE_DIR}/trees/count_nodes/tests.cpp
        count_nodes_solution
)

add_solution_test(lists_sum_tests
        ${CMAKE_SOURCE_DIR}/trees/lists_sum/tests.cpp
        lists_sum_solution
)

add_solution_test(sum_of_right_leaves_tests
        ${CMAKE_SOURCE_DIR}/trees/sum_of_right_leaves/tests.cpp
        sum_of_right_leaves_solution
)

add_solution_test(max_depth_of_tree_tests
        ${CMAKE_SOURCE_DIR}/trees/max_depth_of_tree/tests.cpp
        max_depth_of_tree_solution
)

add_solution_test(tree_diameter_tests
        ${CMAKE_SOURCE_DIR}/trees/tree_diameter/tests.cpp
        tree_diameter_solution
)

add_solution_test(level_order_traversal_tests
        ${CMAKE_SOURCE_DIR}/trees/level_order_traversal/tests.cpp
        level_order_traversal_solution
)

add_solution_test(right_side_tests
        ${CMAKE_SOURCE_DIR}/trees/right_side/tests.cpp
        right_side_solution
)

add_solution_test(sum_from_root_to_leaf_tests
        ${CMAKE_SOURCE_DIR}/trees/sum_from_root_to_leaf/tests.cpp
        sum_from_root_to_leaf_solution
)

add_solution_test(is_balanced_tree_tests
        ${CMAKE_SOURCE_DIR}/trees/is_balanced_tree/tests.cpp
        is_balanced_tree_solution
)

add_solution_test(zigzag_traversal_tests
        ${CMAKE_SOURCE_DIR}/trees/zigzag_traversal_tree/tests.cpp
        zigzag_traversal_solution
)

add_solution_test(min_depth_of_tree_tests
        ${CMAKE_SOURCE_DIR}/trees/min_depth_of_tree/tests.cpp
        min_depth_of_tree_solution
)

add_solution_test(same_trees_tests
        ${CMAKE_SOURCE_DIR}/trees/same_trees/tests.cpp
        same_trees_solution
)

add_solution_test(is_symmetric_tree_tests
        ${CMAKE_SOURCE_DIR}/trees/is_symmetric_tree/tests.cpp
        is_symmetric_tree_solution
)

add_solution_test(find_closest_value_tests
        ${CMAKE_SOURCE_DIR}/binary_search_tree/find_closest_value/tests.cpp
        find_closest_value_solution
)

add_solution_test(find_k_least_tests
        ${CMAKE_SOURCE_DIR}/binary_search_tree/find_k_least/tests.cpp
        find_k_least_solution
)

add_solution_test(find_k_max_tests
        ${CMAKE_SOURCE_DIR}/binary_search_tree/find_k_max/tests.cpp
        find_k_max_solution
)

add_solution_test(path_sum_ii_tests
        ${CMAKE_SOURCE_DIR}/trees/path_sum_ii/tests.cpp
        path_sum_ii_solution
)

add_solution_test(equivalent_trees_tests
        ${CMAKE_SOURCE_DIR}/binary_search_tree/equivalent_trees/tests.cpp
        equivalent_trees_solution
)

add_solution_test(find_middle_tests
        ${CMAKE_SOURCE_DIR}/linked_list/find_middle/tests.cpp
        find_middle_solution
)

add_solution_test(merge_lists_tests
        ${CMAKE_SOURCE_DIR}/linked_list/merge_lists/tests.cpp
        merge_lists_solution
)

add_solution_test(delete_from_the_end_k_tests
        ${CMAKE_SOURCE_DIR}/linked_list/delete_from_the_end_k/tests.cpp
        delete_from_the_end_k_solution
)

add_solution_test(palindrome_list_tests
        ${CMAKE_SOURCE_DIR}/linked_list/palindrome_list/tests.cpp
        palindrome_list_solution
)

add_solution_test(simplify_route_tests
        ${CMAKE_SOURCE_DIR}/stack/simplify_route/tests.cpp
        simplify_route_solution
)

add_solution_test(reversed_polska_notation_tests
        ${CMAKE_SOURCE_DIR}/stack/reversed_polska_notation/tests.cpp
        reversed_polska_notation_solution
)

add_solution_test(3_in_a_row_tests
        ${CMAKE_SOURCE_DIR}/stack/3_in_a_row/tests.cpp
        3_in_a_row_solution
)

add_solution_test(warming_forecast_tests
        ${CMAKE_SOURCE_DIR}/stack/warming_forecast/tests.cpp
        warming_forecast_solution
)

add_solution_test(braced_grammar_tests
        ${CMAKE_SOURCE_DIR}/stack/braced_grammar/tests.cpp
        braced_grammar_solution
)

add_solution_test(brace_decoder_tests
        ${CMAKE_SOURCE_DIR}/stack/brace_decoder/tests.cpp
        brace_decoder_solution
)


add_solution_test(simple_calculator_tests
        ${CMAKE_SOURCE_DIR}/array_and_matrix/simple_calculator/tests.cpp
        simple_calculator_solution
)

add_solution_test(sorted_array_of_number_squares_tests
        ${CMAKE_SOURCE_DIR}/two_pointers/sorted_array_of_number_squares/tests.cpp
        sorted_square_solution
)

add_custom_target(check
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS
        min_moves_to_tests
        min_moves_to_2_tests
        roman_to_integer_tests
        valid_parentheses_tests
        disappeared_numbers_tests
        valid_pairs_arrangement_tests
        two_sum_tests
        linked_list_cycle_tests
        reversed_linked_list_tests
        binary_search_tests
        search_in_2d_matrix_tests
        higher_or_lower_tests
        single_number_tests
        valid_anagram_tests
        4_sum_tests
        find_duplicates_tests
        find_all_anagrams_tests
        find_symmetry_line_tests
        convoluted_route_tests
        group_anagrams_tests
        group_numbers_anagrams_tests
        common_prefix_2_arrays_tests
        sequence_with_k_sum_tests
        sum_two_big_numbers_tests
        summarize_two_graphics_tests
        is_almost_palindrome_tests
        min_count_of_meeting_rooms_tests
        right_palindrome_tests
        uncertain_search_tests
        one_side_difference_tests
        scalar_product_tests
        is_similar_strings_tests
        move_zeroes_to_end_tests
        compress_spaces_tests
        urlify_string_tests
        remove_smiley_faces_tests
        unite_sequence_numbers_tests
        find_max_1_sequence_tests
        best_spot_on_parking_tests
        coding_repeats_tests
        longest_subset_tests
        max_1_segment_with_deletion_tests
        longest_subarray_with_limit_tests
        count_pairs_with_diff_k_tests
        count_of_indexes_couple_tests
        longest_stock_growth_tests
        longest_gene_sequence_tests
        longest_unique_gene_sequence_tests
        check_mutable_virus_tests
        counting_pairs_of_indexes_tests
        fabricated_report_tests
        slingshot_shots_tests
        bus_capacity_tests
        overlapping_intervals_tests
        find_meeting_room_tests
        valid_sudoku_tests
        isomorphic_strings_tests
        tourists_route_tests
        sort_012_tests
        palindrome_permutation_tests
        hirsch_index_tests
        top_k_frequency_elements_tests
        find_missing_char_tests
        first_unique_symbol_solution_tests
        longest_palindrome_tests
        search_in_sorted_array_tests
        insert_in_sorted_array_tests
        find_minimum_carry_load_tests
        find_first_and_last_pos_tests
        search_in_rotated_array_tests
        find_k_closest_elements_tests
        count_nodes_tests
        lists_sum_tests
        sum_of_right_leaves_tests
        max_depth_of_tree_tests
        right_side_tests
        sum_from_root_to_leaf_tests
        is_balanced_tree_tests
        zigzag_traversal_tests
        same_trees_tests
        find_closest_value_tests
        find_k_least_tests
        find_k_max_tests
        path_sum_ii_tests
        equivalent_trees_tests
        find_middle_tests
        merge_lists_tests
        delete_from_the_end_k_tests
        palindrome_list_tests
        simplify_route_tests
        waring_forecast_tests
        braced_grammar_solution_tests
        brace_decoder_tests
        simple_calculator_tests
    USES_TERMINAL
)
