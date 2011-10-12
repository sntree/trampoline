//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_obj_event.cpp'                          *
//                    Generated by version version 2.2.6                     *
//                     october 12th, 2011, at 14h51'5"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "goil_obj_event.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------*

#include "goil_options.h"
#include "template_grammar.h"
#include "cfg_grammar.h"
#include "api_grammar.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_event.gSyntax", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_event::rule_goil_5F_obj_5F_event_event_i0_ (GALGAS_event_5F_map & ioArgument_events,
                                                                        C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @localVariableDeclarationForGeneration
  GALGAS_event_5F_obj var_event ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_lstring var_event_5F_name ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_event_5F_mask_5F_obj var_mask ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_lstring var_desc ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_EVENT) COMMA_SOURCE_FILE_AT_LINE (51)) ;
  //-------- @terminalCheckInstructionForGeneration
  var_event_5F_name = inCompiler->synthetizedAttribute_att_5F_token () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (52)) ;
  //-------- @ifInstructionForGeneration
  const enumGalgasBool test_0 = ioArgument_events.reader_hasKey (var_event_5F_name.reader_string (SOURCE_FILE_AT_LINE (53)) COMMA_SOURCE_FILE_AT_LINE (53)).boolEnum () ;
  if (kBoolTrue == test_0) {
    { //-------- @modifierCallInstructionForGeneration
    ioArgument_events.modifier_del (var_event_5F_name, var_event, inCompiler COMMA_SOURCE_FILE_AT_LINE (54)) ;
    } //-------- END @typeMethodInstructionForGeneration
    //-------- @assignmentInstructionForGeneration
    var_mask = var_event.reader_mask (SOURCE_FILE_AT_LINE (55)) ;
    //-------- @assignmentInstructionForGeneration
    var_desc = var_event.reader_desc (SOURCE_FILE_AT_LINE (56)) ;
  }else if (kBoolFalse == test_0) {
    //-------- @assignmentInstructionForGeneration
    var_mask = GALGAS_event_5F_mask_5F_void_5F_obj::constructor_new (inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (58)) ;
    //-------- @assignmentInstructionForGeneration
    var_desc = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (59)) ;
    //-------- @assignmentInstructionForGeneration
    var_event = GALGAS_event_5F_obj::constructor_new (var_desc, var_mask COMMA_SOURCE_FILE_AT_LINE (60)) ;
  }
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (62)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_event_5F_attributes_ (var_mask, inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (64)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_description_ (var_desc, inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (66)) ;
  //-------- @assignmentInstructionForGeneration
  var_event = GALGAS_event_5F_obj::constructor_new (var_desc, var_mask COMMA_SOURCE_FILE_AT_LINE (68)) ;
  { //-------- @modifierCallInstructionForGeneration
  ioArgument_events.modifier_put (var_event_5F_name, var_event, inCompiler COMMA_SOURCE_FILE_AT_LINE (69)) ;
  } //-------- END @typeMethodInstructionForGeneration
}

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_event::rule_goil_5F_obj_5F_event_event_i0_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_EVENT) COMMA_SOURCE_FILE_AT_LINE (51)) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (52)) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (62)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_event_5F_attributes_parse (inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (64)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_description_parse (inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (66)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_event::rule_goil_5F_obj_5F_event_event_5F_attributes_i1_ (GALGAS_event_5F_mask_5F_obj & ioArgument_mask,
                                                                                      C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @repeatInstructionForGeneration
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_goil_5F_obj_5F_event_0 (inCompiler)) {
    case 2: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MASK) COMMA_SOURCE_FILE_AT_LINE (77)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (77)) ;
      //-------- @selectInstructionForGeneration
      switch (select_goil_5F_obj_5F_event_1 (inCompiler)) {
      case 1: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE_AT_LINE (79)) ;
        //-------- @structuredCastInstructionForGeneration
        if (ioArgument_mask.isValid ()) {
          if (ioArgument_mask.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_event_5F_mask_5F_void_5F_obj) {
            //-------- @assignmentInstructionForGeneration
            ioArgument_mask = GALGAS_event_5F_mask_5F_auto_5F_obj::constructor_new (inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (82)) ;
          }else{
            //-------- @errorInstructionForGeneration
            inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("MASK attribute already defined for this EVENT") COMMA_SOURCE_FILE_AT_LINE (84)) ;
            //-------- @errorInstructionForGeneration
            inCompiler->emitSemanticError (ioArgument_mask.reader_location (SOURCE_FILE_AT_LINE (85)), GALGAS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (85)) ;
          }
        }
      } break ;
      case 2: {
        //-------- @localVariableDeclarationForGeneration
        GALGAS_luint_36__34_ var_mask_5F_value ;
        //-------- @terminalCheckInstructionForGeneration
        var_mask_5F_value = inCompiler->synthetizedAttribute_integerNumber () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (89)) ;
        //-------- @structuredCastInstructionForGeneration
        if (ioArgument_mask.isValid ()) {
          if (ioArgument_mask.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_event_5F_mask_5F_void_5F_obj) {
            //-------- @assignmentInstructionForGeneration
            ioArgument_mask = GALGAS_event_5F_mask_5F_user_5F_obj::constructor_new (inCompiler->here (), var_mask_5F_value COMMA_SOURCE_FILE_AT_LINE (92)) ;
            //-------- @ifInstructionForGeneration
            const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_mask_5F_value.reader_uint_36__34_ (SOURCE_FILE_AT_LINE (93)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE_AT_LINE (93)).reader_uint_36__34_ (SOURCE_FILE_AT_LINE (93)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              //-------- @errorInstructionForGeneration
              inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("MASK attribute should be a 32 bits integer") COMMA_SOURCE_FILE_AT_LINE (94)) ;
            }else if (kBoolFalse == test_1) {
              //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
              GALGAS_uint var_nbbits = GALGAS_uint ((PMUInt32) 0U) ;
              //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
              GALGAS_uint_36__34_ var_pof_32_ = GALGAS_uint_36__34_ ((PMUInt64) 1ULL) ;
              //-------- @loopInstructionForGeneration
              if (GALGAS_uint ((PMUInt32) 32U).isValid ()) {
                PMUInt32 variant_2252 = GALGAS_uint ((PMUInt32) 32U).uintValue () ;
                bool loop_2252 = true ;
                while (loop_2252) {
                  loop_2252 = GALGAS_bool (kIsStrictInf, var_pof_32_.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE_AT_LINE (99)).reader_uint_36__34_ (SOURCE_FILE_AT_LINE (99)))).isValid () ;
                  if (loop_2252) {
                    loop_2252 = GALGAS_bool (kIsStrictInf, var_pof_32_.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE_AT_LINE (99)).reader_uint_36__34_ (SOURCE_FILE_AT_LINE (99)))).boolValue () ;
                  }
                  if (loop_2252 && (0 == variant_2252)) {
                    loop_2252 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE_AT_LINE (98)) ;
                  }
                  if (loop_2252) {
                    variant_2252 -- ;
                    //-------- @ifInstructionForGeneration
                    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_pof_32_.operator_and (var_mask_5F_value.reader_uint_36__34_ (SOURCE_FILE_AT_LINE (100)) COMMA_SOURCE_FILE_AT_LINE (100)).objectCompare (GALGAS_uint_36__34_ ((PMUInt64) 0ULL))).boolEnum () ;
                    if (kBoolTrue == test_2) {
                      //-------- @incrementInstructionForGeneration
                      var_nbbits.increment_operation (inCompiler COMMA_SOURCE_FILE_AT_LINE (101)) ;
                    }
                    //-------- @assignmentInstructionForGeneration
                    var_pof_32_ = var_pof_32_.left_shift_operation (GALGAS_uint ((PMUInt32) 1U) COMMA_SOURCE_FILE_AT_LINE (103)) ;
                  }
                }
              }
              //-------- @ifInstructionForGeneration
              const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_nbbits.objectCompare (GALGAS_uint ((PMUInt32) 1U))).boolEnum () ;
              if (kBoolTrue == test_3) {
                //-------- @warningInstructionForGeneration
                inCompiler->emitSemanticWarning (inCompiler->here (), GALGAS_string ("MASK attribute uses more than 1 bit") COMMA_SOURCE_FILE_AT_LINE (106)) ;
              }
            }
          }else{
            //-------- @errorInstructionForGeneration
            inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("MASK attribute already defined for this EVENT") COMMA_SOURCE_FILE_AT_LINE (110)) ;
            //-------- @errorInstructionForGeneration
            inCompiler->emitSemanticError (ioArgument_mask.reader_location (SOURCE_FILE_AT_LINE (111)), GALGAS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (111)) ;
          }
        }
      } break ;
      default:
        break ;
      }
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_2922_0 ; // Joker input parameter
      nt_description_ (joker_2922_0, inCompiler) ;
      joker_2922_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_event::rule_goil_5F_obj_5F_event_event_5F_attributes_i1_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @repeatInstructionForGeneration
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_goil_5F_obj_5F_event_0 (inCompiler)) {
    case 2: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MASK) COMMA_SOURCE_FILE_AT_LINE (77)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (77)) ;
      //-------- @selectInstructionForGeneration
      switch (select_goil_5F_obj_5F_event_1 (inCompiler)) {
      case 1: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE_AT_LINE (79)) ;
      } break ;
      case 2: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (89)) ;
      } break ;
      default:
        break ;
      }
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


