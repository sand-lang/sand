
// Generated from SandLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SandLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, Not = 6, Neg = 7, ConditionalOr = 8, 
    ConditionalAnd = 9, TernaryOperator = 10, EqualTo = 11, NotEqualTo = 12, 
    LessThanOrEqualTo = 13, LessThan = 14, GreaterThan = 15, Xor = 16, BitwiseOr = 17, 
    BitwiseAnd = 18, Equal = 19, AddEqual = 20, SubEqual = 21, MulEqual = 22, 
    DivEqual = 23, ModEqual = 24, XorEqual = 25, OrEqual = 26, AndEqual = 27, 
    OpeningParen = 28, ClosingParen = 29, OpeningBrace = 30, ClosingBrace = 31, 
    OpeningBracket = 32, ClosingBracket = 33, Variadic = 34, InclusiveRange = 35, 
    ExclusiveRange = 36, As = 37, SizeOf = 38, Const = 39, Class = 40, Extends = 41, 
    Special = 42, Static = 43, Dot = 44, Arrow = 45, Union = 46, Enum = 47, 
    Destructor = 48, Namespace = 49, ScopeResolver = 50, VariableDeclarator = 51, 
    If = 52, Else = 53, While = 54, Break = 55, For = 56, In = 57, Function = 58, 
    Extern = 59, Return = 60, Cast = 61, Alias = 62, Comma = 63, Colon = 64, 
    Attribute = 65, Assembly = 66, Import = 67, True = 68, False = 69, NullLiteral = 70, 
    InstructionsSeparator = 71, VariableName = 72, StringLiteral = 73, CharLiteral = 74, 
    DecimalLiteral = 75, FloatingLiteral = 76, ZeroLiteral = 77, HexadecimalLiteral = 78, 
    BinaryLiteral = 79, Comment = 80, WhiteSpace = 81, LineTerminator = 82
  };

  SandLexer(antlr4::CharStream *input);
  ~SandLexer();

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

