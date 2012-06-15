// Copyright 2012 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Central place to house common unittest functionality for pdb_lib.

#ifndef SYZYGY_PDB_UNITTEST_UTIL_H_
#define SYZYGY_PDB_UNITTEST_UTIL_H_

namespace testing {

// Paths to various files in syzygy/pdb/test_data.
extern const wchar_t kTestPdbFilePath[];
extern const wchar_t kTestDllFilePath[];
extern const wchar_t kOmappedTestPdbFilePath[];

}  // namespace testing

#endif  // SYZYGY_PDB_UNITTEST_UTIL_H_