/*
Developed by ltdzzzz aka nikeceo
*/
#pragma once

#define prefix "Content-Type: multipart/mixed;\r\n\tboundary=\"----=_NextPart_000_000A_01D6EA8B.23BA1640\"\r\n\r\nThis is a multipart message in MIME format.\r\n\r\n------=_NextPart_000_000A_01D6EA8B.23BA1640\r\nContent-Type: application/ms-tnef;\r\n\tname=\"winmail.dat\"\r\nContent-Transfer-Encoding: base64\r\nContent-Disposition: attachment;\r\n\tfilename=\"winmail.dat\"\r\n"
#define suffix "\r\n------=_NextPart_000_000A_01D6EA8B.23BA1640--\r\n\r\n"
#define prefix_l 332
#define suffix_l 51

class TnefPacker{
public:
  static size_t TnefPacking(char * tnef, size_t size, char *eml);
  static size_t TnefUnpacking(char *eml, size_t size, char *tnef);

private:
  /*static const char *prefix = "Content-Type: multipart/mixed;\r\n\tboundary=\"----=_NextPart_000_000A_01D6EA8B.23BA1640\"\r\n\r\nThis is a multipart message in MIME format.\r\n\r\n------=_NextPart_000_000A_01D6EA8B.23BA1640\r\nContent-Type: application/ms-tnef;\r\n\tname=\"winmail.dat\"\r\nContent-Transfer-Encoding: base64\r\nContent-Disposition: attachment;\r\n\tfilename=\"winmail.dat\"\r\n";
  static const char *end = "\r\n------=_NextPart_000_000A_01D6EA8B.23BA1640--\r\n\r\n";
  static size_t prefix_l = 332;
  static size_t end_l = 51;*/
};

