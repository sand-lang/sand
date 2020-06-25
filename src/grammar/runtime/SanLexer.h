
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
    Class = 30, Extends = 31, Special = 32, Static = 33, Dot = 34, Arrow = 35, 
    Union = 36, Destructor = 37, Namespace = 38, ScopeResolver = 39, VariableDeclarator = 40, 
    If = 41, Else = 42, While = 43, Break = 44, For = 45, In = 46, Function = 47, 
    Extern = 48, Return = 49, Operator = 50, Cast = 51, Alias = 52, Comma = 53, 
    Colon = 54, Attribute = 55, Assembly = 56, Import = 57, True = 58, False = 59, 
    InstructionsSeparator = 60, VariableName = 61, StringLiteral = 62, CharLiteral = 63, 
    DecimalLiteral = 64, FloatingLiteral = 65, ZeroLiteral = 66, HexadecimalLiteral = 67, 
    BinaryLiteral = 68, Comment = 69, WhiteSpace = 70, LineTerminator = 71
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

