
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
    ClosingBrace = 21, OpeningBracket = 22, ClosingBracket = 23, Variadic = 24, 
    InclusiveRange = 25, ExclusiveRange = 26, As = 27, SizeOf = 28, Const = 29, 
    Class = 30, Extends = 31, Special = 32, Static = 33, This = 34, Dot = 35, 
    Arrow = 36, Union = 37, Destructor = 38, Namespace = 39, ScopeResolver = 40, 
    VariableDeclarator = 41, If = 42, Else = 43, While = 44, Break = 45, 
    For = 46, In = 47, Function = 48, Extern = 49, Return = 50, Operator = 51, 
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

