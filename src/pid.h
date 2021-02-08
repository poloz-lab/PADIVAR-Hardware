/*
Copyright or © or Copr. PST PADIVAR Hardware (2020)
contributors:
QuentinC <quclement@et.esiea.fr>
Nulan <novais@et.esiea.fr>
Mathilde <mroyer@et.esiea.fr>
Poloz <polozfr@laposte.net>
MathysG <gageot@et.esiea.fr>

This software is a computer program whose purpose is to diagnose a vehicle.

This software is governed by the CeCILL license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.
*/

#ifndef PID_H
#define PID_H

#include <string>
#include <exception>
#include <vector>

namespace HexPids
{
    enum HexPid
    {
        h0100,
        h0101,
        h0102,
        h0103,
        h0104,
        h0105,
        h0106,
        h0107,
        h0108,
        h0109,
        h010A,
        h010B,
        h010C,
        h010D,
        h010E,
        h010F,
        h0110,
        h0111,
        h0112,
        h0113,
        h0114,
        h0115,
        h0116,
        h0117,
        h0118,
        h0119,
        h011A,
        h011B,
        h011C,
        h011D,
        h011E,
        h011F,
        h0120,
        h0121,
        h0122,
        h0123,
        h0124,
        h0125,
        h0126,
        h0127,
        h0128,
        h0129,
        h012A,
        h012B,
        h012C,
        h012D,
        h012E,
        h012F,
        h0130,
        h0131,
        h0132,
        h0133,
        h0134,
        h0135,
        h0136,
        h0137,
        h0138,
        h0139,
        h013A,
        h013B,
        h013C,
        h013D,
        h013E,
        h013F,
        h0140,
        h0141,
        h0142,
        h0143,
        h0144,
        h0145,
        h0146,
        h0147,
        h0148,
        h0149,
        h014A,
        h014B,
        h014C,
        h014D,
        h014E,
        h014F,
        h0150,
        h0151,
        h0152,
        h0153,
        h0154,
        h0155,
        h0156,
        h0157,
        h0158,
        h0159,
        h015A,
        h015B,
        h015C,
        h015D,
        h015E,
        h015F,
        h0160,
        h0161,
        h0162,
        h0163,
        h0164,
        h0165,
        h0166,
        h0167,
        h0168,
        h0169,
        h016A,
        h016B,
        h016C,
        h016D,
        h016E,
        h016F,
        h0170,
        h0171,
        h0172,
        h0173,
        h0174,
        h0175,
        h0176,
        h0177,
        h0178,
        h0179,
        h017A,
        h017B,
        h017C,
        h017D,
        h017E,
        h017F,
        h0180,
        h0181,
        h0182,
        h0183,
        h0184,
        h0185,
        h0186,
        h0187,
        h0188,
        h0189,
        h018A,
        h018B,
        h018C,
        h018D,
        h018E,
        h018F,
        h0190,
        h0191,
        h0192,
        h0193,
        h0194,
        h0195,
        h0196,
        h0197,
        h0198,
        h0199,
        h019A,
        h019B,
        h019C,
        h019D,
        h019E,
        h019F,
        h01A0,
        h01A1,
        h01A2,
        h01A3,
        h01A4,
        h01A5,
        h01A6,
        h01C0,
        h01C3,
        h01C4,
        h0200,
        h0201,
        h0202,
        h0203,
        h0204,
        h0205,
        h0206,
        h0207,
        h0208,
        h0209,
        h020A,
        h020B,
        h020C,
        h020D,
        h020E,
        h020F,
        h0210,
        h0211,
        h0212,
        h0213,
        h0214,
        h0215,
        h0216,
        h0217,
        h0218,
        h0219,
        h021A,
        h021B,
        h021C,
        h021D,
        h021E,
        h021F,
        h0220,
        h0221,
        h0222,
        h0223,
        h0224,
        h0225,
        h0226,
        h0227,
        h0228,
        h0229,
        h022A,
        h022B,
        h022C,
        h022D,
        h022E,
        h022F,
        h0230,
        h0231,
        h0232,
        h0233,
        h0234,
        h0235,
        h0236,
        h0237,
        h0238,
        h0239,
        h023A,
        h023B,
        h023C,
        h023D,
        h023E,
        h023F,
        h0240,
        h0241,
        h0242,
        h0243,
        h0244,
        h0245,
        h0246,
        h0247,
        h0248,
        h0249,
        h024A,
        h024B,
        h024C,
        h024D,
        h024E,
        h024F,
        h0250,
        h0251,
        h0252,
        h0253,
        h0254,
        h0255,
        h0256,
        h0257,
        h0258,
        h0259,
        h025A,
        h025B,
        h025C,
        h025D,
        h025E,
        h025F,
        h0260,
        h0261,
        h0262,
        h0263,
        h0264,
        h0265,
        h0266,
        h0267,
        h0268,
        h0269,
        h026A,
        h026B,
        h026C,
        h026D,
        h026E,
        h026F,
        h0270,
        h0271,
        h0272,
        h0273,
        h0274,
        h0275,
        h0276,
        h0277,
        h0278,
        h0279,
        h027A,
        h027B,
        h027C,
        h027D,
        h027E,
        h027F,
        h0280,
        h0281,
        h0282,
        h0283,
        h0284,
        h0285,
        h0286,
        h0287,
        h0288,
        h0289,
        h028A,
        h028B,
        h028C,
        h028D,
        h028E,
        h028F,
        h0290,
        h0291,
        h0292,
        h0293,
        h0294,
        h0295,
        h0296,
        h0297,
        h0298,
        h0299,
        h029A,
        h029B,
        h029C,
        h029D,
        h029E,
        h029F,
        h02A0,
        h02A1,
        h02A2,
        h02A3,
        h02A4,
        h02A5,
        h02A6,
        h02C0,
        h02C3,
        h02C4,
        h03,
        h04,
        h0900,
        h0901,
        h0902,
        h0903,
        h0904,
        h0905,
        h0906,
        h0907,
        h0908,
        h0909,
        h090A,
        h090B
    };

    static const HexPid All[] = {h0100,
        h0101,
        h0102,
        h0103,
        h0104,
        h0105,
        h0106,
        h0107,
        h0108,
        h0109,
        h010A,
        h010B,
        h010C,
        h010D,
        h010E,
        h010F,
        h0110,
        h0111,
        h0112,
        h0113,
        h0114,
        h0115,
        h0116,
        h0117,
        h0118,
        h0119,
        h011A,
        h011B,
        h011C,
        h011D,
        h011E,
        h011F,
        h0120,
        h0121,
        h0122,
        h0123,
        h0124,
        h0125,
        h0126,
        h0127,
        h0128,
        h0129,
        h012A,
        h012B,
        h012C,
        h012D,
        h012E,
        h012F,
        h0130,
        h0131,
        h0132,
        h0133,
        h0134,
        h0135,
        h0136,
        h0137,
        h0138,
        h0139,
        h013A,
        h013B,
        h013C,
        h013D,
        h013E,
        h013F,
        h0140,
        h0141,
        h0142,
        h0143,
        h0144,
        h0145,
        h0146,
        h0147,
        h0148,
        h0149,
        h014A,
        h014B,
        h014C,
        h014D,
        h014E,
        h014F,
        h0150,
        h0151,
        h0152,
        h0153,
        h0154,
        h0155,
        h0156,
        h0157,
        h0158,
        h0159,
        h015A,
        h015B,
        h015C,
        h015D,
        h015E,
        h015F,
        h0160,
        h0161,
        h0162,
        h0163,
        h0164,
        h0165,
        h0166,
        h0167,
        h0168,
        h0169,
        h016A,
        h016B,
        h016C,
        h016D,
        h016E,
        h016F,
        h0170,
        h0171,
        h0172,
        h0173,
        h0174,
        h0175,
        h0176,
        h0177,
        h0178,
        h0179,
        h017A,
        h017B,
        h017C,
        h017D,
        h017E,
        h017F,
        h0180,
        h0181,
        h0182,
        h0183,
        h0184,
        h0185,
        h0186,
        h0187,
        h0188,
        h0189,
        h018A,
        h018B,
        h018C,
        h018D,
        h018E,
        h018F,
        h0190,
        h0191,
        h0192,
        h0193,
        h0194,
        h0195,
        h0196,
        h0197,
        h0198,
        h0199,
        h019A,
        h019B,
        h019C,
        h019D,
        h019E,
        h019F,
        h01A0,
        h01A1,
        h01A2,
        h01A3,
        h01A4,
        h01A5,
        h01A6,
        h01C0,
        h01C3,
        h01C4,
        h0200,
        h0201,
        h0202,
        h0203,
        h0204,
        h0205,
        h0206,
        h0207,
        h0208,
        h0209,
        h020A,
        h020B,
        h020C,
        h020D,
        h020E,
        h020F,
        h0210,
        h0211,
        h0212,
        h0213,
        h0214,
        h0215,
        h0216,
        h0217,
        h0218,
        h0219,
        h021A,
        h021B,
        h021C,
        h021D,
        h021E,
        h021F,
        h0220,
        h0221,
        h0222,
        h0223,
        h0224,
        h0225,
        h0226,
        h0227,
        h0228,
        h0229,
        h022A,
        h022B,
        h022C,
        h022D,
        h022E,
        h022F,
        h0230,
        h0231,
        h0232,
        h0233,
        h0234,
        h0235,
        h0236,
        h0237,
        h0238,
        h0239,
        h023A,
        h023B,
        h023C,
        h023D,
        h023E,
        h023F,
        h0240,
        h0241,
        h0242,
        h0243,
        h0244,
        h0245,
        h0246,
        h0247,
        h0248,
        h0249,
        h024A,
        h024B,
        h024C,
        h024D,
        h024E,
        h024F,
        h0250,
        h0251,
        h0252,
        h0253,
        h0254,
        h0255,
        h0256,
        h0257,
        h0258,
        h0259,
        h025A,
        h025B,
        h025C,
        h025D,
        h025E,
        h025F,
        h0260,
        h0261,
        h0262,
        h0263,
        h0264,
        h0265,
        h0266,
        h0267,
        h0268,
        h0269,
        h026A,
        h026B,
        h026C,
        h026D,
        h026E,
        h026F,
        h0270,
        h0271,
        h0272,
        h0273,
        h0274,
        h0275,
        h0276,
        h0277,
        h0278,
        h0279,
        h027A,
        h027B,
        h027C,
        h027D,
        h027E,
        h027F,
        h0280,
        h0281,
        h0282,
        h0283,
        h0284,
        h0285,
        h0286,
        h0287,
        h0288,
        h0289,
        h028A,
        h028B,
        h028C,
        h028D,
        h028E,
        h028F,
        h0290,
        h0291,
        h0292,
        h0293,
        h0294,
        h0295,
        h0296,
        h0297,
        h0298,
        h0299,
        h029A,
        h029B,
        h029C,
        h029D,
        h029E,
        h029F,
        h02A0,
        h02A1,
        h02A2,
        h02A3,
        h02A4,
        h02A5,
        h02A6,
        h02C0,
        h02C3,
        h02C4,
        h03,
        h04,
        h0900,
        h0901,
        h0902,
        h0903,
        h0904,
        h0905,
        h0906,
        h0907,
        h0908,
        h0909,
        h090A,
        h090B
    };
}
typedef HexPids::HexPid HexPid;

class Pid
{
private:
    std::string pidString_; /*!< PID code (hexadecimal as string) */
    HexPid hexPid_; /*!< PID from the HexPid enum representation */
    std::string data_bytes_; /*!< Bytes of data associated to the PID after a measure */

    /*!
     * \brief Forbid access to default constructor
     */
    Pid();

public:
    /*!
     * \brief constructor when we don't have the data bytes, only when we know which pid (as string) we have to try
     * \param pid : pid in hexadecimal format
     */
    Pid(std::string pid);

    /*!
     * \brief constructor when we have the pid and the data bytes from the vehicle associated to this pid
     * \param pid : pid in hexadecimal format (as string)
     * \param data_bytes : data bytes associated to the pid
     */
    Pid(std::string pid, std::string data_bytes);

    /*!
     * \brief constructor where the pid is from the HexPid enum representation but we don't know the data_bytes associated
     * \param pid : pid from HexPid enum
     */
    Pid(HexPid pid);

    /*!
     * \brief constructor where the pid is from the HexPid enum representation and we know the data_bytes associated
     * \param pid : pid from HexPid enum
     * \param data_bytes : data bytes associated to the pid
     */
    Pid(HexPid pid, std::string data_bytes);

    /*!
     * \brief Get the pid in hexadecimal (string)
     * \return pid in hexadecimal (string)
     */
    std::string getPidString();

    /*!
     * \brief Get the pid with the HexPid enum representation
     * \return Pid in HexPid enum
     */
    HexPid getHexPid();

    /*!
     * \brief Get the data bytes of the measure of this PID
     * \return data bytes as string
     */
    std::string getDataBytes();

    /*!
     * \brief Set the data bytes after the measure of this PID
     * \param data_bytes : data_bytes of the measure as string
     */
    void setDataBytes(std::string data_bytes);

    /*!
     * \brief Get a description to explain what the PID is about
     * \return description of the pid
     */
    std::string getDescription();

    /*!
     * \brief Get the units associated to the value
     * \return units
     */
    std::string getUnits();

    /*!
     * \brief get number of data bytes returned by the PID
     * \return number of data bytes returned by the PID
     */
    unsigned int getNumberOfDataBytes();

    /*!
     * \brief get the data byte at index specified
     * \param index : index where to find data byte (from left to right, begins at 0)
     * \return data byte at index transformed as unsigned int
     * 
     * If the PID returns 2 data bytes, the function returns for index 0 the first data byte (from left to right).
     */
    unsigned int getDataByteAtIndex(unsigned int index);

    /*!
     * \brief get the number of values returned by the Pid
     * \return number of values returned by the Pid
     * 
     * Sometimes a PID gives two informations, for example PID 0129 that gives Air-Fuel equivalence ratio (lambda) & voltage
     */
    unsigned int getNumberOfValues();

    /*!
     * \brief Get minimum value possible for this PID
     * \return minimum values as vector in case of multiple values
     * 
     * The size of the vector depends of the number of values returned by the PID.
     */
    std::vector<float> getMin();

    /*!
     * \brief Get maximum value possible for this PID
     * \return maximum values as vector in case of multiple values
     * 
     * The size of the vector depends of the number of values returned by the PID.
     */
    std::vector<float> getMax();

    /*!
     * \brief Get the value associated to the data bytes. Sometimes, a calculation may be necessary
     * \return values associated to data_bytes as vector in case of multiple values
     * 
     * The size of the vector depends of the number of values returned by the PID.
     */
    std::vector<float> getValue();
};

namespace ExceptionPidTypes
{
    enum ExceptionPidType
    {
        NoError,
        UnknownPidString,
        UnknownHexPid,
        NoDataBytes,
        NoDescription,
        NoUnits,
        NoMin,
        NoMax,
        NoValue
    };
}
typedef ExceptionPidTypes::ExceptionPidType ExceptionPidType;

class ExceptionPid : public std::exception
{
public:
    ExceptionPid(ExceptionPidType type) throw();
    ExceptionPid(ExceptionPidType type, std::string option) throw();
    virtual const char* what() const throw();
private:
    ExceptionPidType type_;
    std::string explaination_;
};

#endif
