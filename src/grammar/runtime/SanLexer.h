
// Generated from SanLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, Not = 6, ConditionalOr = 7, 
    ConditionalAnd = 8, EqualTo = 9, NotEqualTo = 10, LessThanOrEqualTo = 11, 
    LessThan = 12, GreaterThan = 13, Xor = 14, BitwiseOr = 15, BitwiseAnd = 16, 
    Equal = 17, AddEqual = 18, SubEqual = 19, MulEqual = 20, DivEqual = 21, 
    ModEqual = 22, XorEqual = 23, OrEqual = 24, AndEqual = 25, OpeningParen = 26, 
    ClosingParen = 27, OpeningBrace = 28, ClosingBrace = 29, OpeningBracket = 30, 
    ClosingBracket = 31, Variadic = 32, InclusiveRange = 33, ExclusiveRange = 34, 
    As = 35, SizeOf = 36, Const = 37, Class = 38, Extends = 39, Special = 40, 
    Static = 41, Dot = 42, Arrow = 43, Union = 44, Enum = 45, Destructor = 46, 
    Namespace = 47, ScopeResolver = 48, VariableDeclarator = 49, If = 50, 
    Else = 51, While = 52, Break = 53, For = 54, In = 55, Function = 56, 
    Extern = 57, Return = 58, Cast = 59, Alias = 60, Comma = 61, Colon = 62, 
    Attribute = 63, Assembly = 64, Import = 65, True = 66, False = 67, NullLiteral = 68, 
    InstructionsSeparator = 69, VariableName = 70, StringLiteral = 71, CharLiteral = 72, 
    DecimalLiteral = 73, FloatingLiteral = 74, ZeroLiteral = 75, HexadecimalLiteral = 76, 
    BinaryLiteral = 77, Comment = 78, WhiteSpace = 79, LineTerminator = 80
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

