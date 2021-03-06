/*
 * Copyright (C) Intel 2016
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef UEVENTREADER_H_
#define UEVENTREADER_H_

#include "LogReader.h"

class UeventReader : public LogReader {
  int fd;
  bool nonblock;
 public:
  explicit UeventReader(bool nonblock = false);
  virtual std::shared_ptr<LogItem> get();
  virtual ~UeventReader();
};

#endif /* UEVENTREADER_H_ */
