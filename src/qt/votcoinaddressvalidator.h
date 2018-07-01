// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VOTCOIN_QT_VOTCOINADDRESSVALIDATOR_H
#define VOTCOIN_QT_VOTCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class VotcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VotcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Votcoin address widget validator, checks for a valid votcoin address.
 */
class VotcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VotcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // VOTCOIN_QT_VOTCOINADDRESSVALIDATOR_H
