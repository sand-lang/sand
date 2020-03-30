
// Generated from SanLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, OpeningParen = 6, ClosingParen = 7, 
    OpeningBrace = 8, ClosingBrace = 9, OpeningBracket = 10, ClosingBracket = 11, 
    Void = 12, Bool = 13, Int8 = 14, Int16 = 15, Int32 = 16, Int64 = 17, 
    UInt8 = 18, UInt16 = 19, UInt32 = 20, UInt64 = 21, Float32 = 22, Float64 = 23, 
    Function = 24, Return = 25, Comma = 26, Colon = 27, VariableName = 28, 
    StringLiteral = 29, CharLiteral = 30, IntegerLiteral = 31, DecimalLiteral = 32, 
    ZeroLiteral = 33, HexadecimalLiteral = 34, BinaryLiteral = 35, WhiteSpace = 36, 
    LineTerminator = 37
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

