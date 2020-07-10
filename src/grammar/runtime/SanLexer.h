
// Generated from SanLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanLexer : public antlr4::Lexer {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, Not = 6, ConditionalOr = 7, 
    ConditionalAnd = 8, EqualTo = 9, NotEqualTo = 10, LessThanOrEqualTo = 11, 
    GreaterThanOrEqualTo = 12, LessThan = 13, GreaterThan = 14, Xor = 15, 
    BitwiseOr = 16, BitwiseAnd = 17, Equal = 18, OpeningParen = 19, ClosingParen = 20, 
    OpeningBrace = 21, ClosingBrace = 22, OpeningBracket = 23, ClosingBracket = 24, 
    Variadic = 25, InclusiveRange = 26, ExclusiveRange = 27, As = 28, SizeOf = 29, 
    Const = 30, Class = 31, Extends = 32, Special = 33, Static = 34, Dot = 35, 
    Arrow = 36, Union = 37, Enum = 38, Destructor = 39, Namespace = 40, 
    ScopeResolver = 41, VariableDeclarator = 42, If = 43, Else = 44, While = 45, 
    Break = 46, For = 47, In = 48, Function = 49, Extern = 50, Return = 51, 
    Cast = 52, Alias = 53, Comma = 54, Colon = 55, Attribute = 56, Assembly = 57, 
    Import = 58, True = 59, False = 60, InstructionsSeparator = 61, VariableName = 62, 
    StringLiteral = 63, CharLiteral = 64, DecimalLiteral = 65, FloatingLiteral = 66, 
    ZeroLiteral = 67, HexadecimalLiteral = 68, BinaryLiteral = 69, Comment = 70, 
    WhiteSpace = 71, LineTerminator = 72
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

