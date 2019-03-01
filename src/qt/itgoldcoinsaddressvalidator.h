// Copyright (c) 2011-2014 The Itgoldcoins Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ITGOLDCOINS_QT_ITGOLDCOINSADDRESSVALIDATOR_H
#define ITGOLDCOINS_QT_ITGOLDCOINSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ItgoldcoinsAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ItgoldcoinsAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Itgoldcoins address widget validator, checks for a valid itgoldcoins address.
 */
class ItgoldcoinsAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ItgoldcoinsAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // ITGOLDCOINS_QT_ITGOLDCOINSADDRESSVALIDATOR_H
