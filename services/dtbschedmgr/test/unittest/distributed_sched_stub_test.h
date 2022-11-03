/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef DISTRIBUTED_SCHED_STUB_TEST_H
#define DISTRIBUTED_SCHED_STUB_TEST_H

#include "distributed_sched_interface.h"
#include "iremote_stub.h"
#include "gtest/gtest.h"
#ifdef SUPPORT_DISTRIBUTED_MISSION_MANAGER
#include "mission/snapshot.h"
#endif

#define private public
#include "distributed_sched_stub.h"
#undef private

namespace OHOS {
namespace DistributedSchedule {
class DistributedSchedStubTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    sptr<DistributedSchedStub> distributedSchedStub_;
};
} // namespace DistributedSchedule
} // namespace OHOS
#endif // DISTRIBUTED_SCHED_STUB_TEST_H