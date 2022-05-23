// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements. See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership. The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the License for the
// specific language governing permissions and limitations
// under the License.

#pragma once

#include <memory>
#include "arrow/engine/substrait/api.h"
#include "arrow/util/iterator.h"
#include "arrow/util/optional.h"

namespace arrow {

namespace engine {

namespace substrait {

/// \brief Retrieve a RecordBatchReader from a Substrait plan.
ARROW_ENGINE_EXPORT Result<std::shared_ptr<RecordBatchReader>> ExecuteSerializedPlan(
    const Buffer& substrait_buffer);

/// \brief Get a Serialized Plan from a Substrait JSON plan.
/// This is a helper method for Python tests.
ARROW_ENGINE_EXPORT Result<std::shared_ptr<Buffer>> SerializeJsonPlan(
    const std::string& substrait_json);

}  // namespace substrait

}  // namespace engine

}  // namespace arrow
