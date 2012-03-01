//---------------------------------------------------------------------------*
//                                                                           *
//                      File 'goil_template_test.cpp'                        *
//                        Generated by version 1.9.7                         *
//                     december 17th, 2009, at 9h52'6"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 629
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "goil_template_test.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_template_test.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//             Include directives generated by grammar includes              *
//                                                                           *
//---------------------------------------------------------------------------*

#include "goil_template_grammar.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                Implementation of function "testFunction"                  *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_string function_testFunction (C_Compiler & inLexique,
                                const GGS_systemConfig   var_cas_inCfg,
                                const GGS_string  var_cas_inArg1,
                                const GGS_uint64   var_cas_inArg2,
                                const GGS_bool  var_cas_inArg3 COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER function_testFunction at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_string var_cas_outResult ;
  var_cas_outResult = (((((((GGS_string ("[")).operator_concat (var_cas_inCfg.reader_version (inLexique COMMA_SOURCE_FILE_AT_LINE (35)))).operator_concat (GGS_string ("] {"))).operator_concat (var_cas_inArg1)).operator_concat (GGS_string ("} "))).operator_concat (var_cas_inArg2.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (35)))).operator_concat (GGS_string (" "))).operator_concat (var_cas_inArg3.reader_ocString (inLexique COMMA_SOURCE_FILE_AT_LINE (35))) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE function_testFunction\n") ;
  #endif
  return var_cas_outResult ;
}

//---------------------------------------------------------------------------*

static GGS_object functionForGenericCall_testFunction (C_Compiler & inLexique,
                           const GGS_objectlist & inEffectiveParameterArray,
                           const GGS_location & inErrorLocation
                           COMMA_LOCATION_ARGS) {
  const GGS_systemConfig  arg_0 = GGS_systemConfig ::castFromObject (inLexique, inEffectiveParameterArray.reader_mValueAtIndex (inLexique, GGS_uint (0) COMMA_THERE), inErrorLocation COMMA_THERE) ;
  const GGS_string arg_1 = GGS_string::castFromObject (inLexique, inEffectiveParameterArray.reader_mValueAtIndex (inLexique, GGS_uint (1) COMMA_THERE), inErrorLocation COMMA_THERE) ;
  const GGS_uint64  arg_2 = GGS_uint64 ::castFromObject (inLexique, inEffectiveParameterArray.reader_mValueAtIndex (inLexique, GGS_uint (2) COMMA_THERE), inErrorLocation COMMA_THERE) ;
  const GGS_bool arg_3 = GGS_bool::castFromObject (inLexique, inEffectiveParameterArray.reader_mValueAtIndex (inLexique, GGS_uint (3) COMMA_THERE), inErrorLocation COMMA_THERE) ;
  const GGS_string result = function_testFunction (inLexique,
                            arg_0,
                            arg_1,
                            arg_2,
                            arg_3
                            COMMA_THERE) ;
  return result.reader_object () ;
}

//---------------------------------------------------------------------------*

static const C_galgas_type_descriptor *
kArgumentTypeList_testFunction [4] = {& kTypeDescriptor_GGS_systemConfig ,
                              & kTypeDescriptor_GGS_string,
                              & kTypeDescriptor_GGS_uint64 ,
                              & kTypeDescriptor_GGS_bool} ;

const C_galgas_function_descriptor
kFunction_descriptor_testFunction ("testFunction",
                              functionForGenericCall_testFunction,
                              & kTypeDescriptor_GGS_string,
                              4,
                              kArgumentTypeList_testFunction) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                 Implementation of routine "testTemplate"                  *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_testTemplate (C_Compiler & inLexique COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_testTemplate at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  const GGS_bool cond_6994 = gOption_goil_5F_options_run_5F_goil_5F_template_5F_test.reader_value () ;
  if (cond_6994.isBuiltAndTrue ()) {
    const GGS_string var_cas_templateSourceString = GGS_string ("ceci est%!CHAINE1 %un template.\n"
      "Test if vrai:%if TRUE_VAR then !CHAINE1%1re branche%!CHAINE1 else !CHAINE2 %2e branche% !CHAINE2 end if %.\n"
      "Test if false:%if FALSE_VAR then !CHAINE1%1re branche%!CHAINE1 else !CHAINE2 %2e branche% !CHAINE2 end if %.\n"
      "Test if false, true:%if FALSE_VAR then !CHAINE1%1re branche%!CHAINE1 elsif TRUE_VAR then !CHAINE2 %2e branche% !CHAINE2  else !CHAINE3 %3e branche% !CH"
      "AINE3 end if %.\n"
      "Test if false, false:%if FALSE_VAR then !CHAINE1%1re branche%!CHAINE1 elsif FALSE_VAR then !CHAINE2 %2e branche% !CHAINE2  else !CHAINE3 %3e branche% !"
      "CHAINE3 end if %.\n"
      "Test indentation %\?COL%.\n"
      "%!COL%^ (le ^ doit \xC3""\xAA""tre juste au dessous du point)\n"
      "La liste a %![[UNE_LISTE length] string]% element% if [UNE_LISTE length] > 1 then %s% end if%.\n"
      "Enumeration de la liste:\n"
      "%"
      "foreach UNE_LISTE\n"
      "before %<before>%\n"
      "do %<do>'%!STR_FIELD%', %![UINT_FIELD string]%</do>%\n"
      "between %<between>%\n"
      "after %<after>%\n"
      "end foreach\n"
      "%Fin enumeration.\n"
      "Enumeration d'une liste vide:%foreach LISTE_VIDE\n"
      "before %<before>%\n"
      "do %<do>%\n"
      "between %<between>%\n"
      "after %<after>%\n"
      "end foreach\n"
      "%Fin enumeration.\n"
      "Enumeration de deux listes, dont l'une est vide:%foreach LISTE_VIDE, UNE_LISTE\n"
      "before %<before>%\n"
      "do %<do>%\n"
      "between %<between>%\n"
      "after %<after>%\n"
      "end foreach\n"
      "%Fin enumeration.\n"
      "Enumeration de deux listes, utilisation de prefixed by:%foreach UNE_LISTE prefixedby premier_, AUTRE_LISTE\n"
      "before %<before>%\n"
      "do %<do>'%!premier_STR_FIELD%', '%!STR_FIELD%', %![premier_UINT_FIELD string]%, %![OTHER_UINT_FIELD string]%</do>%\n"
      "between %<between>%\n"
      "after %<after>%\n"
      "end foreach\n"
      "%Fin enumeration.\n"
      "Test de l'appel de fonction\n"
      "%!testFunction (\"A\", 3, yes)%\n") ;
    GGS_goilTemplateVariableMap  var_cas_sampleMap = GGS_goilTemplateVariableMap ::constructor_emptyMap (inLexique COMMA_HERE) ;
    ::routine_addBoolValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("TRUE_VAR"), GGS_location (inLexique) COMMA_HERE),  GGS_bool (true) COMMA_SOURCE_FILE_AT_LINE (85)) ;
    ::routine_addBoolValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("FALSE_VAR"), GGS_location (inLexique) COMMA_HERE),  GGS_bool (false) COMMA_SOURCE_FILE_AT_LINE (86)) ;
    ::routine_addStringValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("CHAINE1"), GGS_location (inLexique) COMMA_HERE),  GGS_string ("<ch1>") COMMA_SOURCE_FILE_AT_LINE (87)) ;
    ::routine_addStringValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("CHAINE2"), GGS_location (inLexique) COMMA_HERE),  GGS_string ("<ch2>") COMMA_SOURCE_FILE_AT_LINE (88)) ;
    ::routine_addStringValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("CHAINE3"), GGS_location (inLexique) COMMA_HERE),  GGS_string ("<ch3>") COMMA_SOURCE_FILE_AT_LINE (89)) ;
    ::routine_addUnsignedValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("UINT0"), GGS_location (inLexique) COMMA_HERE),  GGS_uint64 (123ULL) COMMA_SOURCE_FILE_AT_LINE (90)) ;
    GGS_goilTemplateFieldMap  var_cas_fieldMap = GGS_goilTemplateFieldMap ::constructor_emptyMap (inLexique COMMA_HERE) ;
    ::routine_addBoolFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("BOOL_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_bool (true) COMMA_SOURCE_FILE_AT_LINE (93)) ;
    ::routine_addUnsignedFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("UINT_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_uint64 (14ULL) COMMA_SOURCE_FILE_AT_LINE (94)) ;
    ::routine_addStringFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("STR_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_string ("<toto>") COMMA_SOURCE_FILE_AT_LINE (95)) ;
    GGS_goilTemplateFieldMapList  var_cas_fieldMapList = GGS_goilTemplateFieldMapList ::constructor_listWithValue (var_cas_fieldMap) ;
    var_cas_fieldMap = GGS_goilTemplateFieldMap ::constructor_emptyMap (inLexique COMMA_HERE) ;
    ::routine_addBoolFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("BOOL_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_bool (false) COMMA_SOURCE_FILE_AT_LINE (98)) ;
    ::routine_addUnsignedFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("UINT_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_uint64 (23ULL) COMMA_SOURCE_FILE_AT_LINE (99)) ;
    ::routine_addStringFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("STR_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_string ("<tutu>") COMMA_SOURCE_FILE_AT_LINE (100)) ;
    var_cas_fieldMapList.addAssign_operation (var_cas_fieldMap) ;
    ::routine_addListValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("UNE_LISTE"), GGS_location (inLexique) COMMA_HERE),  var_cas_fieldMapList COMMA_SOURCE_FILE_AT_LINE (102)) ;
    var_cas_fieldMap = GGS_goilTemplateFieldMap ::constructor_emptyMap (inLexique COMMA_HERE) ;
    ::routine_addBoolFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("OTHER_BOOL_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_bool (false) COMMA_SOURCE_FILE_AT_LINE (105)) ;
    ::routine_addUnsignedFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("OTHER_UINT_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_uint64 (52ULL) COMMA_SOURCE_FILE_AT_LINE (106)) ;
    ::routine_addStringFieldValue (inLexique,  var_cas_fieldMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("STR_FIELD"), GGS_location (inLexique) COMMA_HERE),  GGS_string ("<tata>") COMMA_SOURCE_FILE_AT_LINE (107)) ;
    ::routine_addListValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("AUTRE_LISTE"), GGS_location (inLexique) COMMA_HERE),  GGS_goilTemplateFieldMapList ::constructor_listWithValue (var_cas_fieldMap) COMMA_SOURCE_FILE_AT_LINE (108)) ;
    ::routine_addListValue (inLexique,  var_cas_sampleMap,  GGS_lstring ::constructor_new (inLexique, GGS_string ("LISTE_VIDE"), GGS_location (inLexique) COMMA_HERE),  GGS_goilTemplateFieldMapList ::constructor_emptyList () COMMA_SOURCE_FILE_AT_LINE (110)) ;
    GGS_string var_cas_resutingString = GGS_string ("") ;
    goil_template_grammar::_performSourceStringParsing_ (inLexique,
                                    NULL,
                                    var_cas_templateSourceString,
                                    GGS_string ("code"),
                                    GGS_string (""),
                                    function_emptySystemConfig (inLexique COMMA_SOURCE_FILE_AT_LINE (116)),
                                    var_cas_sampleMap,
                                    var_cas_resutingString
                                    COMMA_SOURCE_FILE_AT_LINE (113)) ;
    inLexique.printMessage (GGS_string ("------------------- GOIL FUNCTION LIST --------------------------\n") COMMA_SOURCE_FILE_AT_LINE (120)) ;
    const GGS_stringset  var_cas_allowedFunctionSet = function_allowedFunctions (inLexique COMMA_SOURCE_FILE_AT_LINE (121)) ;
    {
      GGS_functionlist::cEnumerator enumerator_6407 (GGS_function::constructor_functionList (), true) ;
      const GGS_functionlist::cElement * operand_6407 = NULL ;
      while (((operand_6407 = enumerator_6407.nextObject ()))) {
        macroValidPointer (operand_6407) ;
        const GGS_bool cond_6521 = var_cas_allowedFunctionSet.reader_hasKey (operand_6407->mValue.reader_name ()) ;
        if (cond_6521.isBuiltAndTrue ()) {
          inLexique.printMessage (C_String ("LOGGING mValue: ") + operand_6407->mValue.reader_description ().string () + "\n" COMMA_SOURCE_FILE_AT_LINE (124)) ;
        }
      }
    }
    inLexique.printMessage (GGS_string ("------------------- TEMPLATE SOURCE STRING ----------------------\n") COMMA_SOURCE_FILE_AT_LINE (127)) ;
    inLexique.printMessage (var_cas_templateSourceString COMMA_SOURCE_FILE_AT_LINE (128)) ;
    inLexique.printMessage (GGS_string ("------------------- DUMP TEMPLATE VARIABLE MAP ------------------\n") COMMA_SOURCE_FILE_AT_LINE (129)) ;
    ::routine_displayTemplateVariableMap (inLexique,  var_cas_sampleMap COMMA_SOURCE_FILE_AT_LINE (130)) ;
    inLexique.printMessage (GGS_string ("------------------- RESULT STRING -------------------------------\n") COMMA_SOURCE_FILE_AT_LINE (131)) ;
    inLexique.printMessage (var_cas_resutingString COMMA_SOURCE_FILE_AT_LINE (132)) ;
    inLexique.printMessage (GGS_string ("------------------- END -----------------------------------------\n") COMMA_SOURCE_FILE_AT_LINE (133)) ;
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_testTemplate\n") ;
  #endif
}

//---------------------------------------------------------------------------*
