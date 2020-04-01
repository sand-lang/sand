
// Generated from SanLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, Xor = 6, BitwiseOr = 7, 
    BitwiseAnd = 8, Equal = 9, OpeningParen = 10, ClosingParen = 11, OpeningBrace = 12, 
    ClosingBrace = 13, OpeningBracket = 14, ClosingBracket = 15, Void = 16, 
    Bool = 17, Int8 = 18, Int16 = 19, Int32 = 20, Int64 = 21, UInt8 = 22, 
    UInt16 = 23, UInt32 = 24, UInt64 = 25, Float32 = 26, Float64 = 27, ConstQualifier = 28, 
    LetQualifier = 29, Function = 30, Return = 31, Comma = 32, Colon = 33, 
    InstructionsSeparator = 34, VariableName = 35, StringLiteral = 36, CharLiteral = 37, 
    IntegerLiteral = 38, DecimalLiteral = 39, ZeroLiteral = 40, HexadecimalLiteral = 41, 
    BinaryLiteral = 42, WhiteSpace = 43, LineTerminator = 44
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

