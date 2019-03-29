enum EPaymentMethod
{
	k_EPaymentMethodNone = 0,	// None
	k_EPaymentMethodCDKey,	// CD Key
	k_EPaymentMethodCreditCard,	// Credit Card
	k_EPaymentMethodGiropay,	// Giropay
	k_EPaymentMethodPayPal,	// PayPal
	k_EPaymentMethodIDEAL,	// iDEAL
	k_EPaymentMethodPaySafeCard,	// PaySafeCard
	k_EPaymentMethodSofort,	// Sofort
	k_EPaymentMethodGuestPass,	// Guest Pass
	k_EPaymentMethodWebMoney,	// WebMoney
	k_EPaymentMethodMoneyBookers,	// MoneyBookers
	k_EPaymentMethodAliPay,	// AliPay
	k_EPaymentMethodYandex,	// Yandex
	k_EPaymentMethodKiosk,	// Kiosk
	k_EPaymentMethodQIWI,	// QIWI
	k_EPaymentMethodBeeline = 33,	// Beeline
	k_EPaymentMethodGameStop = 15,	// GameStop
	k_EPaymentMethodHardwarePromo,	// Hardware Promo
	k_EPaymentMethodMopay,	// mopay
	k_EPaymentMethodBoletoBancario,	// Boleto Bancario
	k_EPaymentMethodBoaCompraGold,	// BoaCompra Gold
	k_EPaymentMethodBancoDoBrasilOnline,	// Banco do Brasil Online
	k_EPaymentMethodItauOnline,	// Itau Online
	k_EPaymentMethodBradescoOnline,	// Bradesco Online
	k_EPaymentMethodPagseguro,	// Pagseguro
	k_EPaymentMethodVisaBoaCompra,	// Visa (BoaCompra)
	k_EPaymentMethodAmexBoaCompra,	// Amex (BoaCompra)
	k_EPaymentMethodAura,	// Aura
	k_EPaymentMethodHipercard,	// Hipercard
	k_EPaymentMethodMastercardBoaCompra,	// Mastercard (BoaCompra)
	k_EPaymentMethodDinerSCardBoaCompra,	// Diner's Card (BoaCompra)
	k_EPaymentMethodValve = 129,	// Valve
	k_EPaymentMethodStorePromotion = 131,	// Store Promotion
	k_EPaymentMethodClickBuy = 32,	// Click&Buy
	k_EPaymentMethodAutoGrant = 64,	// Auto Grant
	k_EPaymentMethodWallet = 128,	// Wallet
	k_EPaymentMethodOEMTicket = 256,	// OEM Ticket
	k_EPaymentMethodSplit = 512,	// Split
	k_EPaymentMethodSteamPressMaster = 130,	// Steam/Press Master
	k_EPaymentMethodComplimentary = 1024,	// Complimentary
	k_EPaymentMethodAuthorizedDevice = 30,	// Authorized Device
	k_EPaymentMethodLicensedSite = 80,	// Licensed Site
	k_EPaymentMethodMOLPoints = 31,	// MOL Points
	k_EPaymentMethodKonbini = 34,	// Konbini
	k_EPaymentMethodEClubPoints,	// EClub Points
	k_EPaymentMethodCreditCardDegica,	// Credit Card (Degica)
	k_EPaymentMethodBankTransferDegica,	// Bank Transfer (Degica)
	k_EPaymentMethodPayEasyDegica,	// Pay Easy (Degica)
	k_EPaymentMethodZong,	// Zong
	k_EPaymentMethodCultureVoucher,	// Culture Voucher
	k_EPaymentMethodBookVoucher,	// Book Voucher
	k_EPaymentMethodHappymoneyVoucher,	// Happymoney Voucher
	k_EPaymentMethodConvenientStoreVoucher,	// Convenient Store Voucher
	k_EPaymentMethodGameVoucher,	// Game Voucher
	k_EPaymentMethodMultibanco,	// Multibanco
	k_EPaymentMethodPayshop,	// Payshop
	k_EPaymentMethodMaestro,	// Maestro
	k_EPaymentMethodOXXO,	// OXXO
	k_EPaymentMethodToditoCash,	// Todito Cash
	k_EPaymentMethodCarnet,	// Carnet
	k_EPaymentMethodSPEI,	// SPEI
	k_EPaymentMethod3pay,	// 3pay
	k_EPaymentMethodIsBank,	// Is Bank
	k_EPaymentMethodGaranti,	// Garanti
	k_EPaymentMethodAkbank,	// Akbank
	k_EPaymentMethodYapiKredi,	// Yapi Kredi
	k_EPaymentMethodHalkbank,	// Halkbank
	k_EPaymentMethodBankAsya,	// Bank Asya
	k_EPaymentMethodFinansbank,	// Finansbank
	k_EPaymentMethodDenizBank,	// DenizBank
	k_EPaymentMethodPTT,	// PTT
	k_EPaymentMethodCashU,	// CashU
	k_EPaymentMethodOneCard = 66,	// OneCard
	k_EPaymentMethodWebMoneyDegica = 65,	// WebMoney (Degica)
	k_EPaymentMethodNetCash = 82,	// NetCash
	k_EPaymentMethodBitCash = 81,	// BitCash
	k_EPaymentMethodNanaco = 83,	// Nanaco
	k_EPaymentMethodPSE = 67,	// PSE
	k_EPaymentMethodExito,	// Exito
	k_EPaymentMethodEfecty,	// Efecty
	k_EPaymentMethodBalota,	// Balota
	k_EPaymentMethodPinValidda,	// PinValidda
	k_EPaymentMethodMangirKart,	// MangirKart
	k_EPaymentMethodBancoCreditoDePeru,	// Banco Credito de Peru
	k_EPaymentMethodBBVAContinental,	// BBVA Continental
	k_EPaymentMethodSafetyPay,	// SafetyPay
	k_EPaymentMethodPagoEfectivo,	// PagoEfectivo
	k_EPaymentMethodTrustly,	// Trustly
	k_EPaymentMethodNaranja = 93,	// Naranja
	k_EPaymentMethodCencosud,	// Cencosud
	k_EPaymentMethodCabal,	// Cabal
	k_EPaymentMethodPagoFacil,	// Pago Facil
	k_EPaymentMethodRapipago,	// Rapipago
	k_EPaymentMethodBancoNacionalDeCostaRica,	// Banco Nacional de Costa Rica
	k_EPaymentMethodBancoPoplar,	// Banco Poplar
	k_EPaymentMethodRedPagos,	// Red Pagos
	k_EPaymentMethodSPE,	// SPE
	k_EPaymentMethodMulticaja,	// Multicaja
	k_EPaymentMethodRedCompra,	// RedCompra
	k_EPaymentMethodZiraatBank,	// Ziraat Bank
	k_EPaymentMethodVakiflarBank,	// Vakiflar Bank
	k_EPaymentMethodKuveytTurkBank,	// Kuveyt Turk Bank
	k_EPaymentMethodEkonomiBank,	// Ekonomi Bank
	k_EPaymentMethodPichincha,	// Pichincha
	k_EPaymentMethodPichinchaCash,	// Pichincha Cash
	k_EPaymentMethodUnionPay = 78,	// UnionPay
	k_EPaymentMethodBitcoin,	// Bitcoin
	k_EPaymentMethodTenpay = 84,	// Tenpay
	k_EPaymentMethodWeChat,	// WeChat
	k_EPaymentMethodCashOnDelivery,	// Cash on Delivery
	k_EPaymentMethodCreditCardNodwin,	// Credit Card (Nodwin)
	k_EPaymentMethodDebitCardNodwin,	// Debit Card (Nodwin)
	k_EPaymentMethodNetBankingNodwin,	// Net Banking (Nodwin)
	k_EPaymentMethodCashCardNodwin,	// Cash Card (Nodwin)
	k_EPaymentMethodWalletNodwin,	// Wallet (Nodwin)
	k_EPaymentMethodMobileDegica,	// Mobile (Degica)
	k_EPaymentMethodPrzelewy24 = 110,	// Przelewy24
	k_EPaymentMethodTrustpay,	// Trustpay
	k_EPaymentMethodPOLi,	// POLi
	k_EPaymentMethodMercadoPago,	// MercadoPago
	k_EPaymentMethodPayU,	// PayU
	k_EPaymentMethodVTCPayWallet,	// VTC Pay Wallet
	k_EPaymentMethodVTCPayCards = 119,	// VTC Pay Cards
	k_EPaymentMethodVTCPayOnlineBanking,	// VTC Pay Online Banking
	k_EPaymentMethodMrCash = 116,	// MrCash
	k_EPaymentMethodEPS,	// EPS
	k_EPaymentMethodInterac,	// Interac
	k_EPaymentMethodSantanderRio = 63,	// Santander Rio
	k_EPaymentMethodVisaElectronBoaCompra = 121,	// Visa Electron (BoaCompra)
	k_EPaymentMethodCafeFunded,	// Cafe Funded
	k_EPaymentMethodOCA,	// OCA
	k_EPaymentMethodLider,	// Lider
	k_EPaymentMethodWebMoneySteamCardJapan,	// WebMoney Steam Card (Japan)
	k_EPaymentMethodWebMoneySteamCardTopUpJapan,	// WebMoney Steam Card Top Up (Japan)
	k_EPaymentMethodToss,	// Toss
}
