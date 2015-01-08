﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'StOStr.pas' rev: 28.00 (Windows)

#ifndef StostrHPP
#define StostrHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <StConst.hpp>	// Pascal unit
#include <StBase.hpp>	// Pascal unit
#include <StStrZ.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Stostr
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TStString;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TStString : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	char operator[](unsigned Index) { return AtIndex[Index]; }
	
protected:
	unsigned FAlloc;
	Stbase::BTable FBM;
	char *FBMString;
	char *FCursor;
	char *FDelimiters;
	bool FEnableCursor;
	System::Classes::TStringList* FItems;
	bool FOneBased;
	unsigned FRepeatValue;
	bool FResetRepeat;
	char FQuote;
	char *FString;
	System::Byte FTabSize;
	char *FTemp;
	unsigned FTempAlloc;
	unsigned FWrap;
	char FLineTermChar;
	Stbase::TStLineTerminator FLineTerminator;
	void __fastcall SetLineTerm(const Stbase::TStLineTerminator Value);
	void __fastcall SetLineTermChar(const char Value);
	void __fastcall AddIntToList(int Num);
	void __fastcall AllocTemp(unsigned Size);
	void __fastcall BMMakeTable(char * S);
	void __fastcall CheckAlloc(unsigned Size);
	char * __fastcall DesiredCursor(void);
	void __fastcall FixCursor(unsigned Pos, unsigned Size, bool Delete);
	char __fastcall Get(unsigned Index);
	unsigned __fastcall GetAsciiCount(void);
	System::ShortString __fastcall GetAsShortStr(void);
	unsigned __fastcall GetCursorPos(void);
	System::AnsiString __fastcall GetDelimiters(void);
	unsigned __fastcall GetLength(void);
	unsigned __fastcall GetRelativePos(unsigned Pos);
	System::AnsiString __fastcall GetSoundex(void);
	unsigned __fastcall GetWordCount(void);
	void __fastcall Put(unsigned Index, char Item);
	void __fastcall SetAllocLength(unsigned Value);
	void __fastcall SetAsShortStr(System::ShortString &Value);
	void __fastcall SetCursorPos(unsigned Value);
	void __fastcall SetDelimiters(System::AnsiString Value);
	void __fastcall SetItems(System::Classes::TStringList* Value);
	unsigned __fastcall SuggestSize(unsigned Size);
	void __fastcall TempToString(void);
	void __fastcall UpdateCursor(unsigned Pos);
	System::AnsiString __fastcall GetAsLongStr(void);
	void __fastcall SetAsLongStr(System::AnsiString Value);
	System::Variant __fastcall GetAsVariant(void);
	void __fastcall SetAsVariant(const System::Variant &Value);
	int __fastcall MakeTerminator(char * &Terminator);
	
public:
	__fastcall TStString(void);
	__fastcall virtual TStString(unsigned Size);
	__fastcall virtual TStString(const System::AnsiString S);
	__fastcall virtual TStString(const char * S);
	__fastcall virtual TStString(const System::Variant &S);
	__fastcall virtual ~TStString(void);
	void __fastcall AppendPChar(char * S);
	void __fastcall AppendString(System::AnsiString S);
	bool __fastcall AsciiPosition(unsigned N, unsigned &Pos);
	bool __fastcall BMSearch(const System::AnsiString S, unsigned &Pos);
	bool __fastcall BMSearchUC(const System::AnsiString S, unsigned &Pos);
	void __fastcall Center(unsigned Size);
	void __fastcall CenterCh(const char C, unsigned Size);
	unsigned __fastcall CharCount(const char C);
	bool __fastcall CharExists(const char C);
	void __fastcall CharStr(const char C, unsigned Size);
	void __fastcall ClearItems(void);
	void __fastcall CursorNextWord(void);
	void __fastcall CursorNextWordPrim(void);
	void __fastcall CursorPrevWord(void);
	void __fastcall CursorPrevWordPrim(void);
	void __fastcall CursorToEnd(void);
	void __fastcall DeleteAsciiAtCursor(void);
	void __fastcall DeleteAtCursor(unsigned Length);
	void __fastcall DeleteWordAtCursor(void);
	void __fastcall Detab(void);
	void __fastcall Entab(void);
	System::AnsiString __fastcall ExtractAscii(unsigned N);
	System::AnsiString __fastcall ExtractWord(unsigned N);
	void __fastcall Filter(const char * Filters);
	System::AnsiString __fastcall GetAsciiAtCursor(void);
	char * __fastcall GetAsciiAtCursorZ(char * Dest);
	char * __fastcall GetAsPChar(char * Dest);
	System::AnsiString __fastcall GetWordAtCursor(void);
	char * __fastcall GetWordAtCursorZ(char * Dest);
	void __fastcall InsertLineTerminatorAtCursor(void);
	void __fastcall InsertLineTerminator(unsigned Pos);
	void __fastcall InsertPCharAtCursor(char * S);
	void __fastcall InsertStringAtCursor(System::AnsiString S);
	void __fastcall ItemsToString(void);
	void __fastcall LeftPad(unsigned Size);
	void __fastcall LeftPadCh(const char C, unsigned Size);
	int __fastcall MakeLetterSet(void);
	void __fastcall MoveCursor(int Delta);
	void __fastcall Pack(void);
	void __fastcall Pad(unsigned Size);
	void __fastcall PadCh(const char C, unsigned Size);
	void __fastcall ResetCursor(void);
	void __fastcall Scramble(const System::AnsiString Key);
	void __fastcall SetAsPChar(char * S);
	unsigned __fastcall SizeAsciiAtCursor(bool InclTrailers);
	unsigned __fastcall SizeWordAtCursor(bool InclTrailers);
	void __fastcall StrChDelete(unsigned Pos);
	void __fastcall StrChInsert(const char C, unsigned Pos);
	bool __fastcall StrChPos(const char C, unsigned &Pos);
	void __fastcall StringToItems(void);
	void __fastcall StripLineTerminators(void);
	void __fastcall StrStDelete(const unsigned Pos, const unsigned Length);
	void __fastcall StrStInsert(const System::AnsiString S, unsigned Pos);
	bool __fastcall StrStPos(const System::AnsiString S, unsigned &Pos);
	void __fastcall Substitute(char * FromStr, char * ToStr);
	void __fastcall Trim(void);
	void __fastcall TrimLead(void);
	void __fastcall TrimSpaces(void);
	void __fastcall TrimTrail(void);
	bool __fastcall WordPosition(unsigned N, unsigned &Pos);
	void __fastcall WrapToItems(void);
	__property unsigned AllocLength = {read=FAlloc, write=SetAllocLength, nodefault};
	__property unsigned AsciiCount = {read=GetAsciiCount, nodefault};
	__property System::AnsiString AsLongStr = {read=GetAsLongStr, write=SetAsLongStr};
	__property System::Variant AsVariant = {read=GetAsVariant, write=SetAsVariant};
	__property System::ShortString AsShortStr = {read=GetAsShortStr, write=SetAsShortStr};
	__property char AtIndex[unsigned Index] = {read=Get, write=Put/*, default*/};
	__property unsigned CursorPos = {read=GetCursorPos, write=SetCursorPos, nodefault};
	__property System::AnsiString Delimiters = {read=GetDelimiters, write=SetDelimiters};
	__property bool EnableCursor = {read=FEnableCursor, write=FEnableCursor, nodefault};
	__property unsigned Length = {read=GetLength, nodefault};
	__property char LineTermChar = {read=FLineTermChar, write=SetLineTermChar, default=10};
	__property Stbase::TStLineTerminator LineTerminator = {read=FLineTerminator, write=SetLineTerm, default=3};
	__property System::Classes::TStringList* Items = {read=FItems, write=SetItems};
	__property bool OneBased = {read=FOneBased, write=FOneBased, nodefault};
	__property unsigned RepeatValue = {read=FRepeatValue, write=FRepeatValue, nodefault};
	__property bool ResetRepeat = {read=FResetRepeat, write=FResetRepeat, nodefault};
	__property System::AnsiString Soundex = {read=GetSoundex};
	__property char Quote = {read=FQuote, write=FQuote, nodefault};
	__property System::Byte TabSize = {read=FTabSize, write=FTabSize, nodefault};
	__property unsigned WordCount = {read=GetWordCount, nodefault};
	__property unsigned WrapColumn = {read=FWrap, write=FWrap, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DefAllocSize = System::Int8(0x8);
static const System::WideChar DefDelimiters = (System::WideChar)(0x20);
static const System::WideChar DefQuote = (System::WideChar)(0x27);
static const System::Int8 DefRepeatValue = System::Int8(0x1);
static const bool DefResetRepeat = true;
static const System::Int8 DefTabSize = System::Int8(0x8);
static const System::Int8 DefWrap = System::Int8(0x50);
}	/* namespace Stostr */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STOSTR)
using namespace Stostr;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StostrHPP