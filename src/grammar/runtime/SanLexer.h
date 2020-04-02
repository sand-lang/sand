
// Generated from SanLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, ConditionalOr = 6, ConditionalAnd = 7, 
    EqualTo = 8, NotEqualTo = 9, LessThanOrEqualTo = 10, GreaterThanOrEqualTo = 11, 
    LessThan = 12, GreaterThan = 13, Xor = 14, BitwiseOr = 15, BitwiseAnd = 16, 
    Equal = 17, OpeningParen = 18, ClosingParen = 19, OpeningBrace = 20, 
    ClosingBrace = 21, OpeningBracket = 22, ClosingBracket = 23, Void = 24, 
    Bool = 25, Int8 = 26, Int16 = 27, Int32 = 28, Int64 = 29, UInt8 = 30, 
    UInt16 = 31, UInt32 = 32, UInt64 = 33, Float32 = 34, Float64 = 35, Const = 36, 
    VariableDeclarator = 37, If = 38, Else = 39, Function = 40, Return = 41, 
    Comma = 42, Colon = 43, InstructionsSeparator = 44, VariableName = 45, 
    StringLiteral = 46, CharLiteral = 47, IntegerLiteral = 48, DecimalLiteral = 49, 
    ZeroLiteral = 50, HexadecimalLiteral = 51, BinaryLiteral = 52, WhiteSpace = 53, 
    LineTerminator = 54
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

