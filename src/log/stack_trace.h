#pragma once

namespace co {

class StackTrace {
public:
    StackTrace() = default;
    virtual ~StackTrace() = default;

    virtual void dump_stack(void *f, int skip) = 0;
};

StackTrace *new_stack_trace();

} // namespace co
