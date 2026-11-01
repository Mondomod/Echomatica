/*
 * DISTRHO Plugin Framework (DPF)
 * Copyright (C) 2012-2025 Filipe Coelho <falktx@falktx.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any purpose with
 * or without fee is hereby granted, provided that the above copyright notice and this
 * permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD
 * TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN
 * NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#define HEADLESS_TESTS
#include "tests.hpp"
#include "distrho/extra/Base64.hpp"
#include "distrho/extra/String.hpp"

// --------------------------------------------------------------------------------------------------------------------

int main()
{
    using namespace DISTRHO_NAMESPACE;

    String test("This is a test");
    std::vector<uint8_t> testblob(test.buffer(), test.buffer() + (test.length() + 1));
    std::vector<uint8_t> blob = d_getChunkFromBase64String(String::asBase64(test.buffer(), test.length() + 1));
    DISTRHO_ASSERT_EQUAL(blob, testblob, "encode + decode must match original data");

    return 0;
}

// --------------------------------------------------------------------------------------------------------------------
