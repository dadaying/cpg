#include "playground/play_multiple_subscripts.h"

#include <print>
#include <algorithm>

namespace PLAYGROUND_NAMESPACE
{
    PLAYGROUND_NAMESPACE_INLINE_START

    PlayMultipleSubscripts::PlayMultipleSubscripts()
    {
        play_version_ = PlayVersion::kCxx23;
        play_type_ = PlayType::kOperatorOverride;
        play_status_ = PlayStatus::kFinsh;
        play_describe_ = "Operator Overload Multiple Subscripts";
    }

    void PlayMultipleSubscripts::Run()
    {
        std::println("************** {} **************", "Run Context");
        struct Matrix
        {
            Matrix(const uint64_t row_value, const uint64_t column_value)
            {
                row = row_value;
                column = column_value;
                data.resize(row * column);
                std::ranges::iota(data, 0);
            }
            int operator[](const int a, const int b) const
            {
                return data[column * a + b];
            }
            uint64_t row = 0;
            uint64_t column = 0;
            std::vector<int> data;
        };
        constexpr uint64_t kRow = 4;
        constexpr uint64_t kColumn = 5;
        const Matrix matrix(kRow, kColumn);
        for (size_t i = 0; i < kRow; ++i)
        {
            for (size_t j = 0; j < kColumn; ++j)
            {
                std::print("matrix[{}, {}]={}   ", i, j, matrix[i, j]);
            }
            std::println("");
        }
    }

    PLAYGROUND_NAMESPACE_INLINE_END
} // namespace PLAYGROUND_NAMESPACE