#pragma once

//! QGadget
#include <QObject>

//! Deps
#include <entt/core/attribute.h>

namespace atomic_dex
{
    class ENTT_API TradingModeGadget
    {
        Q_GADGET

      public:
        enum TradingModeEnum
        {
            Pro        = 0,
            Simple     = 1,
            MultiOrder = 2
        };

        Q_ENUM(TradingModeEnum)

      private:
        explicit TradingModeGadget();
    };

    class ENTT_API MarketModeGadget
    {
        Q_GADGET

      public:
        enum MarketModeEnum
        {
            Sell = 0,
            Buy  = 1
        };

        Q_ENUM(MarketModeEnum)

      private:
        explicit MarketModeGadget();
    };

    class ENTT_API TradingErrorGadget
    {
        Q_GADGET

      public:
        enum TradingErrorEnum
        {
            None                                     = 0,
            TotalFeesNotEnoughFunds                  = 1, ///< Not enough to pay any kind of fees
            BalanceIsLessThanTheMinimalTradingAmount = 2, ///< max_trading_vol < 0.00777
            PriceFieldNotFilled                      = 3, ///< Price empty or 0
            VolumeFieldNotFilled                     = 4, ///< Volume empty or 0
            VolumeIsLowerThanTheMinimum              = 5, ///< Volume field < 0.00777
            ReceiveVolumeIsLowerThanTheMinimum       = 6
        };

        Q_ENUM(TradingErrorEnum)

      private:
        explicit TradingErrorGadget();
    };
} // namespace atomic_dex

using MarketMode   = atomic_dex::MarketModeGadget::MarketModeEnum;
using TradingError = atomic_dex::TradingErrorGadget::TradingErrorEnum;
using TradingMode  = atomic_dex::TradingModeGadget::TradingModeEnum;
