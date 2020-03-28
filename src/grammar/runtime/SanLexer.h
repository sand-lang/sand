
// Generated from SanLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, OpeningParen = 6, ClosingParen = 7, 
    OpeningBrace = 8, ClosingBrace = 9, OpeningBracket = 10, ClosingBracket = 11, 
    Int8 = 12, Int16 = 13, Int32 = 14, Int64 = 15, UInt8 = 16, UInt16 = 17, 
    UInt32 = 18, UInt64 = 19, Float32 = 20, Float64 = 21, Function = 22, 
    Comma = 23, Colon = 24, VariableName = 25, StringLiteral = 26, CharLiteral = 27, 
    IntegerLiteral = 28, DecimalLiteral = 29, ZeroLiteral = 30, HexadecimalLiteral = 31, 
    BinaryLiteral = 32, WhiteSpace = 33, LineTerminator = 34
  };

  SanLexer(antlr4::CharStream *input);
  ~SanLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

