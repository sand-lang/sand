
// Generated from SanLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, Equal = 6, OpeningParen = 7, 
    ClosingParen = 8, OpeningBrace = 9, ClosingBrace = 10, OpeningBracket = 11, 
    ClosingBracket = 12, Void = 13, Bool = 14, Int8 = 15, Int16 = 16, Int32 = 17, 
    Int64 = 18, UInt8 = 19, UInt16 = 20, UInt32 = 21, UInt64 = 22, Float32 = 23, 
    Float64 = 24, ConstQualifier = 25, LetQualifier = 26, Function = 27, 
    Return = 28, Comma = 29, Colon = 30, InstructionsSeparator = 31, VariableName = 32, 
    StringLiteral = 33, CharLiteral = 34, IntegerLiteral = 35, DecimalLiteral = 36, 
    ZeroLiteral = 37, HexadecimalLiteral = 38, BinaryLiteral = 39, WhiteSpace = 40, 
    LineTerminator = 41
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

