/*
 * Copyright (C) Intel 2016
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Generated by update_tests.sh
 * run source update_tests.sh to update
 */

#include <stdio.h>

#include "tests.h"

#define ASSERT_EQ(x, y) do {\
  if ((x) != (y)) {\
    printf("test failed " #x " != " #y "\n");\
  } else { \
    printf("test OK " #x " == " #y "\n");\
  } } while (0)

int main(int argc, char **argv) {
  // Run test_attachments_get_info
  ASSERT_EQ(0, test_attachments_get_info());
  // Run test_attachments_pass_existing
  ASSERT_EQ(0, test_attachments_pass_existing());
  // Run test_attachments_pass_non_existing
  ASSERT_EQ(0, test_attachments_pass_non_existing());
  // Run test_attachments_copy_existing
  ASSERT_EQ(0, test_attachments_copy_existing());
  // Run test_attachments_copy_non_existing
  ASSERT_EQ(0, test_attachments_copy_non_existing());
  // Run test_attachments_copy_invalid_dest
  ASSERT_EQ(0, test_attachments_copy_invalid_dest());
  // Run test_attachments_exec_success
  ASSERT_EQ(0, test_attachments_exec_success());
  // Run test_attachments_exec_bad_command
  ASSERT_EQ(0, test_attachments_exec_bad_command());
  // Run test_attachments_exec_bad_output
  ASSERT_EQ(0, test_attachments_exec_bad_output());
  // Run test_attachments_exec_long_command
  ASSERT_EQ(0, test_attachments_exec_long_command());
  // Run test_attachments_replace_cap
  ASSERT_EQ(0, test_attachments_replace_cap());
  // Run test_data_replace_complete
  ASSERT_EQ(0, test_data_replace_complete());
  // Run test_data_replace_incomplete
  ASSERT_EQ(0, test_data_replace_incomplete());
  // Run test_pattern_invalid
  ASSERT_EQ(0, test_pattern_invalid());
  // Run test_pattern_valid
  ASSERT_EQ(0, test_pattern_valid());
  // Run test_eventwatch_invalid
  ASSERT_EQ(0, test_eventwatch_invalid());
  // Run test_eventwatch_invalid_bad_start
  ASSERT_EQ(0, test_eventwatch_invalid_bad_start());
  // Run test_eventwatch_accept_one
  ASSERT_EQ(0, test_eventwatch_accept_one());
  // Run test_eventwatch_flush_eof
  ASSERT_EQ(0, test_eventwatch_flush_eof());
  // Run test_eventwatch_history
  ASSERT_EQ(0, test_eventwatch_history());
  // Run test_eventwatch_kick_noisy
  ASSERT_EQ(0, test_eventwatch_kick_noisy());
  // Run test_eventwatch_gen_1
  ASSERT_EQ(0, test_eventwatch_gen_1());
  // Run test_eventwatch_gen_2
  ASSERT_EQ(0, test_eventwatch_gen_2());
  // Run test_eventwatch_kick_lazy
  ASSERT_EQ(0, test_eventwatch_kick_lazy());
  // Run test_eventwatch_suspend_interval
  ASSERT_EQ(0, test_eventwatch_suspend_interval());
  // Run test_eventwatch_suspend_interval_keep
  ASSERT_EQ(0, test_eventwatch_suspend_interval_keep());
  // Run test_eventwatch_vlidation_pass
  ASSERT_EQ(0, test_eventwatch_vlidation_pass());
  // Run test_eventwatch_vlidation_pass_twice
  ASSERT_EQ(0, test_eventwatch_vlidation_pass_twice());
  // Run test_eventwatch_vlidation_fail
  ASSERT_EQ(0, test_eventwatch_vlidation_fail());
  // Run test_eventwatch_no_vlidation
  ASSERT_EQ(0, test_eventwatch_no_vlidation());

  return 0;
}