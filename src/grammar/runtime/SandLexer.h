
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
    ExclusiveRange = 36, As = 37, SizeOf = 38, TypeOf = 39, Const = 40, 
    Class = 41, Extends = 42, Special = 43, Static = 44, Dot = 45, Arrow = 46, 
    Union = 47, Enum = 48, Destructor = 49, Namespace = 50, ScopeResolver = 51, 
    VariableDeclarator = 52, If = 53, Else = 54, While = 55, Break = 56, 
    For = 57, In = 58, Function = 59, Extern = 60, Return = 61, Cast = 62, 
    Alias = 63, Comma = 64, Colon = 65, Attribute = 66, Assembly = 67, Import = 68, 
    True = 69, False = 70, NullLiteral = 71, InstructionsSeparator = 72, 
    VariableName = 73, StringLiteral = 74, CharLiteral = 75, DecimalLiteral = 76, 
    FloatingLiteral = 77, ZeroLiteral = 78, HexadecimalLiteral = 79, BinaryLiteral = 80, 
    Comment = 81, WhiteSpace = 82, LineTerminator = 83
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

