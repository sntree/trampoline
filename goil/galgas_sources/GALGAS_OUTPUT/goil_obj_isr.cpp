//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_obj_isr.cpp'                           *
//                    Generated by version version 2.2.6                     *
//                     october 12th, 2011, at 14h51'33"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "goil_obj_isr.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------*

#include "goil_options.h"
#include "template_grammar.h"
#include "cfg_grammar.h"
#include "api_grammar.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_isr.gSyntax", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_i0_ (GALGAS_isr_5F_map & ioArgument_isrs,
                                                                  C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @localVariableDeclarationForGeneration
  GALGAS_lstring var_isr_5F_name ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_isr_5F_obj var_isr ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_basic_5F_type var_category ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_basic_5F_type var_priority ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_lstring var_desc ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_lstringlist var_resources ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_lstringlist var_messages ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_lstringlist var_acc_5F_apps ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_timing_5F_prot var_timing_5F_prot ;
  //-------- @localVariableDeclarationForGeneration
  GALGAS_ident_5F_map var_other_5F_fields ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ISR) COMMA_SOURCE_FILE_AT_LINE (74)) ;
  //-------- @terminalCheckInstructionForGeneration
  var_isr_5F_name = inCompiler->synthetizedAttribute_att_5F_token () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (74)) ;
  //-------- @ifInstructionForGeneration
  const enumGalgasBool test_0 = ioArgument_isrs.reader_hasKey (var_isr_5F_name.reader_string (SOURCE_FILE_AT_LINE (75)) COMMA_SOURCE_FILE_AT_LINE (75)).boolEnum () ;
  if (kBoolTrue == test_0) {
    { //-------- @modifierCallInstructionForGeneration
    ioArgument_isrs.modifier_del (var_isr_5F_name, var_isr, inCompiler COMMA_SOURCE_FILE_AT_LINE (76)) ;
    } //-------- END @typeMethodInstructionForGeneration
    //-------- @assignmentInstructionForGeneration
    var_category = var_isr.reader_category (SOURCE_FILE_AT_LINE (77)) ;
    //-------- @assignmentInstructionForGeneration
    var_priority = var_isr.reader_priority (SOURCE_FILE_AT_LINE (78)) ;
    //-------- @assignmentInstructionForGeneration
    var_desc = var_isr.reader_desc (SOURCE_FILE_AT_LINE (79)) ;
    //-------- @assignmentInstructionForGeneration
    var_resources = var_isr.reader_resources (SOURCE_FILE_AT_LINE (80)) ;
    //-------- @assignmentInstructionForGeneration
    var_messages = var_isr.reader_messages (SOURCE_FILE_AT_LINE (81)) ;
    //-------- @assignmentInstructionForGeneration
    var_acc_5F_apps = var_isr.reader_acc_5F_apps (SOURCE_FILE_AT_LINE (82)) ;
    //-------- @assignmentInstructionForGeneration
    var_timing_5F_prot = var_isr.reader_timing_5F_prot (SOURCE_FILE_AT_LINE (83)) ;
    //-------- @assignmentInstructionForGeneration
    var_other_5F_fields = var_isr.reader_other_5F_fields (SOURCE_FILE_AT_LINE (84)) ;
  }else if (kBoolFalse == test_0) {
    //-------- @assignmentInstructionForGeneration
    var_category = GALGAS_void::constructor_new (inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (86)) ;
    //-------- @assignmentInstructionForGeneration
    var_priority = GALGAS_void::constructor_new (inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (87)) ;
    //-------- @assignmentInstructionForGeneration
    var_desc = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (88)) ;
    //-------- @assignmentInstructionForGeneration
    var_resources = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE_AT_LINE (89)) ;
    //-------- @assignmentInstructionForGeneration
    var_messages = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE_AT_LINE (90)) ;
    //-------- @assignmentInstructionForGeneration
    var_acc_5F_apps = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE_AT_LINE (91)) ;
    //-------- @assignmentInstructionForGeneration
    var_timing_5F_prot = GALGAS_void_5F_timing_5F_prot::constructor_new (inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (92)) ;
    //-------- @assignmentInstructionForGeneration
    var_other_5F_fields = GALGAS_ident_5F_map::constructor_emptyMap (SOURCE_FILE_AT_LINE (93)) ;
    //-------- @assignmentInstructionForGeneration
    var_isr = GALGAS_isr_5F_obj::constructor_new (var_desc, var_category, var_priority, var_resources, var_messages, var_acc_5F_apps, var_timing_5F_prot, var_other_5F_fields COMMA_SOURCE_FILE_AT_LINE (94)) ;
  }
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (96)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_isr_5F_attributes_ (var_category, var_priority, var_resources, var_messages, var_acc_5F_apps, var_timing_5F_prot, var_other_5F_fields, inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (98)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_description_ (var_desc, inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (100)) ;
  //-------- @assignmentInstructionForGeneration
  var_isr = GALGAS_isr_5F_obj::constructor_new (var_desc, var_category, var_priority, var_resources, var_messages, var_acc_5F_apps, var_timing_5F_prot, var_other_5F_fields COMMA_SOURCE_FILE_AT_LINE (102)) ;
  { //-------- @modifierCallInstructionForGeneration
  ioArgument_isrs.modifier_put (var_isr_5F_name, var_isr, inCompiler COMMA_SOURCE_FILE_AT_LINE (103)) ;
  } //-------- END @typeMethodInstructionForGeneration
}

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_i0_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ISR) COMMA_SOURCE_FILE_AT_LINE (74)) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (74)) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (96)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_isr_5F_attributes_parse (inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (98)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_description_parse (inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (100)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_5F_attributes_i1_ (GALGAS_basic_5F_type & ioArgument_category,
                                                                                GALGAS_basic_5F_type & ioArgument_priority,
                                                                                GALGAS_lstringlist & ioArgument_resources,
                                                                                GALGAS_lstringlist & ioArgument_messages,
                                                                                GALGAS_lstringlist & ioArgument_acc_5F_apps,
                                                                                GALGAS_timing_5F_prot & ioArgument_timing_5F_prot,
                                                                                GALGAS_ident_5F_map & ioArgument_other_5F_fields,
                                                                                C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @repeatInstructionForGeneration
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_goil_5F_obj_5F_isr_0 (inCompiler)) {
    case 2: {
      //-------- @localVariableDeclarationForGeneration
      GALGAS_luint_36__34_ var_cat ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CATEGORY) COMMA_SOURCE_FILE_AT_LINE (118)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (118)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_cat = inCompiler->synthetizedAttribute_integerNumber () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (118)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_2987_0 ; // Joker input parameter
      nt_description_ (joker_2987_0, inCompiler) ;
      joker_2987_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (118)) ;
      //-------- @structuredCastInstructionForGeneration
      if (ioArgument_category.isValid ()) {
        if (ioArgument_category.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34__5F_class) {
          //-------- @errorInstructionForGeneration
          inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("ISR category attribute already defined for this ISR") COMMA_SOURCE_FILE_AT_LINE (121)) ;
          //-------- @errorInstructionForGeneration
          inCompiler->emitSemanticError (ioArgument_category.reader_location (SOURCE_FILE_AT_LINE (122)), GALGAS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (122)) ;
        }else{
          //-------- @ifInstructionForGeneration
          const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_cat.reader_uint_36__34_ (SOURCE_FILE_AT_LINE (124)).objectCompare (GALGAS_uint_36__34_ ((PMUInt64) 1ULL))).operator_and (GALGAS_bool (kIsNotEqual, var_cat.reader_uint_36__34_ (SOURCE_FILE_AT_LINE (124)).objectCompare (GALGAS_uint_36__34_ ((PMUInt64) 2ULL))) COMMA_SOURCE_FILE_AT_LINE (124)).boolEnum () ;
          if (kBoolTrue == test_1) {
            //-------- @errorInstructionForGeneration
            inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("ISR category should be 1 ou 2") COMMA_SOURCE_FILE_AT_LINE (125)) ;
          }
          //-------- @assignmentInstructionForGeneration
          ioArgument_category = GALGAS_uint_36__34__5F_class::constructor_new (inCompiler->here (), var_cat.reader_uint_36__34_ (SOURCE_FILE_AT_LINE (127)) COMMA_SOURCE_FILE_AT_LINE (127)) ;
        }
      }
    } break ;
    case 3: {
      //-------- @localVariableDeclarationForGeneration
      GALGAS_luint_36__34_ var_prio ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_PRIORITY) COMMA_SOURCE_FILE_AT_LINE (131)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (131)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_prio = inCompiler->synthetizedAttribute_integerNumber () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (131)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_3487_0 ; // Joker input parameter
      nt_description_ (joker_3487_0, inCompiler) ;
      joker_3487_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (131)) ;
      //-------- @structuredCastInstructionForGeneration
      if (ioArgument_priority.isValid ()) {
        if (ioArgument_priority.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
          //-------- @assignmentInstructionForGeneration
          ioArgument_priority = GALGAS_uint_33__32__5F_class::constructor_new (inCompiler->here (), var_prio.reader_uint_36__34_ (SOURCE_FILE_AT_LINE (134)).reader_uint (inCompiler COMMA_SOURCE_FILE_AT_LINE (134)) COMMA_SOURCE_FILE_AT_LINE (134)) ;
        }else{
          //-------- @errorInstructionForGeneration
          inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("PRIORITY already defined for this ISR") COMMA_SOURCE_FILE_AT_LINE (136)) ;
          //-------- @errorInstructionForGeneration
          inCompiler->emitSemanticError (ioArgument_priority.reader_location (SOURCE_FILE_AT_LINE (137)), GALGAS_string ("was previouly defined here") COMMA_SOURCE_FILE_AT_LINE (137)) ;
        }
      }
    } break ;
    case 4: {
      //-------- @localVariableDeclarationForGeneration
      GALGAS_lstring var_rez ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_RESOURCE) COMMA_SOURCE_FILE_AT_LINE (141)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (141)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_rez = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (141)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_3834_0 ; // Joker input parameter
      nt_description_ (joker_3834_0, inCompiler) ;
      joker_3834_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (141)) ;
      { //-------- @routineCallInstructionForGeneration
      routine_add_5F_lstring_5F_unique (ioArgument_resources, var_rez, GALGAS_string ("RESOURCE"), inCompiler COMMA_SOURCE_FILE_AT_LINE (142)) ;
      } //-------- @routineCallInstructionForGeneration
    } break ;
    case 5: {
      //-------- @localVariableDeclarationForGeneration
      GALGAS_lstring var_mess ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MESSAGE) COMMA_SOURCE_FILE_AT_LINE (145)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (145)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_mess = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (145)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_3977_0 ; // Joker input parameter
      nt_description_ (joker_3977_0, inCompiler) ;
      joker_3977_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (145)) ;
      { //-------- @routineCallInstructionForGeneration
      routine_add_5F_lstring_5F_unique (ioArgument_messages, var_mess, GALGAS_string ("MESSAGE"), inCompiler COMMA_SOURCE_FILE_AT_LINE (146)) ;
      } //-------- @routineCallInstructionForGeneration
    } break ;
    case 6: {
      //-------- @ifInstructionForGeneration
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_bool (gOption_goil_5F_options_autosar_5F_on.reader_value ()).objectCompare (GALGAS_bool (false))).boolEnum () ;
      if (kBoolTrue == test_2) {
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("AUTOSAR flag is off, turn it on to use TIMINGPROTECTION attribute in ISR object") COMMA_SOURCE_FILE_AT_LINE (149)) ;
      }
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TIMING_5F_PROTECTION) COMMA_SOURCE_FILE_AT_LINE (151)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (151)) ;
      //-------- @selectInstructionForGeneration
      switch (select_goil_5F_obj_5F_isr_1 (inCompiler)) {
      case 1: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_SOURCE_FILE_AT_LINE (153)) ;
        //-------- @assignmentInstructionForGeneration
        ioArgument_timing_5F_prot = GALGAS_false_5F_timing_5F_prot::constructor_new (inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (154)) ;
      } break ;
      case 2: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_SOURCE_FILE_AT_LINE (156)) ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (156)) ;
        //-------- @localVariableDeclarationForGeneration
        GALGAS_basic_5F_type var_exe_5F_budget ;
        //-------- @localVariableDeclarationForGeneration
        GALGAS_basic_5F_type var_exe_5F_time ;
        //-------- @localVariableDeclarationForGeneration
        GALGAS_basic_5F_type var_time_5F_frame ;
        //-------- @localVariableDeclarationForGeneration
        GALGAS_basic_5F_type var_os_5F_it_5F_lock ;
        //-------- @localVariableDeclarationForGeneration
        GALGAS_basic_5F_type var_all_5F_it_5F_lock ;
        //-------- @localVariableDeclarationForGeneration
        GALGAS_rezlock_5F_map var_rezlocks ;
        //-------- @nonterminalInstructionForGeneration
        nt_timing_5F_prot_5F_attrs_ (var_exe_5F_budget, var_exe_5F_time, var_time_5F_frame, var_os_5F_it_5F_lock, var_all_5F_it_5F_lock, var_rezlocks, inCompiler) ;
        //-------- @structuredCastInstructionForGeneration
        if (var_exe_5F_time.isValid ()) {
          if (var_exe_5F_time.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
            //-------- @errorInstructionForGeneration
            inCompiler->emitSemanticError (inCompiler->here (), GALGAS_string ("EXECUTIONTIME not declared") COMMA_SOURCE_FILE_AT_LINE (165)) ;
          }
        }
        //-------- @structuredCastInstructionForGeneration
        if (var_exe_5F_budget.isValid ()) {
          if (var_exe_5F_budget.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34__5F_class) {
            GALGAS_uint_36__34__5F_class cast_4815_eb ((cPtr_uint_36__34__5F_class *) var_exe_5F_budget.ptr ()) ;
            //-------- @errorInstructionForGeneration
            inCompiler->emitSemanticError (cast_4815_eb.reader_location (SOURCE_FILE_AT_LINE (169)), GALGAS_string ("EXECUTIONBUDGET is not an attribute of isr timing protection") COMMA_SOURCE_FILE_AT_LINE (169)) ;
          }
        }
        //-------- @assignmentInstructionForGeneration
        ioArgument_timing_5F_prot = GALGAS_timing_5F_prot_5F_isr::constructor_new (inCompiler->here (), var_exe_5F_time, var_time_5F_frame, var_os_5F_it_5F_lock, var_all_5F_it_5F_lock, var_rezlocks COMMA_SOURCE_FILE_AT_LINE (172)) ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (179)) ;
      } break ;
      default:
        break ;
      }
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (181)) ;
    } break ;
    case 7: {
      //-------- @localVariableDeclarationForGeneration
      GALGAS_lstring var_app ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ACCESSING_5F_APPLICATION) COMMA_SOURCE_FILE_AT_LINE (184)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (184)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_app = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (184)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_5224_0 ; // Joker input parameter
      nt_description_ (joker_5224_0, inCompiler) ;
      joker_5224_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (184)) ;
      { //-------- @routineCallInstructionForGeneration
      routine_add_5F_lstring_5F_unique (ioArgument_acc_5F_apps, var_app, GALGAS_string ("ACCESSING_APPLICATION"), inCompiler COMMA_SOURCE_FILE_AT_LINE (185)) ;
      } //-------- @routineCallInstructionForGeneration
    } break ;
    case 8: {
      //-------- @localVariableDeclarationForGeneration
      GALGAS_lstring var_src ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_SOURCE) COMMA_SOURCE_FILE_AT_LINE (188)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (188)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_src = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (188)) ;
      { //-------- @modifierCallInstructionForGeneration
      ioArgument_other_5F_fields.modifier_put (GALGAS_lstring::constructor_new (GALGAS_string ("SOURCE"), inCompiler->here () COMMA_SOURCE_FILE_AT_LINE (189)), GALGAS_string_5F_class::constructor_new (var_src.reader_location (SOURCE_FILE_AT_LINE (189)), var_src.reader_string (SOURCE_FILE_AT_LINE (189)) COMMA_SOURCE_FILE_AT_LINE (189)), inCompiler COMMA_SOURCE_FILE_AT_LINE (189)) ;
      } //-------- END @typeMethodInstructionForGeneration
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_5478_0 ; // Joker input parameter
      nt_description_ (joker_5478_0, inCompiler) ;
      joker_5478_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (190)) ;
    } break ;
    case 9: {
      //-------- @nonterminalInstructionForGeneration
      nt_free_5F_field_ (ioArgument_other_5F_fields, inCompiler) ;
      //-------- @nonterminalInstructionForGeneration
      GALGAS_lstring joker_5543_0 ; // Joker input parameter
      nt_description_ (joker_5543_0, inCompiler) ;
      joker_5543_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (192)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------*

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_5F_attributes_i1_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @repeatInstructionForGeneration
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_goil_5F_obj_5F_isr_0 (inCompiler)) {
    case 2: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CATEGORY) COMMA_SOURCE_FILE_AT_LINE (118)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (118)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (118)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (118)) ;
    } break ;
    case 3: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_PRIORITY) COMMA_SOURCE_FILE_AT_LINE (131)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (131)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (131)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (131)) ;
    } break ;
    case 4: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_RESOURCE) COMMA_SOURCE_FILE_AT_LINE (141)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (141)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (141)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (141)) ;
    } break ;
    case 5: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MESSAGE) COMMA_SOURCE_FILE_AT_LINE (145)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (145)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (145)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (145)) ;
    } break ;
    case 6: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TIMING_5F_PROTECTION) COMMA_SOURCE_FILE_AT_LINE (151)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (151)) ;
      //-------- @selectInstructionForGeneration
      switch (select_goil_5F_obj_5F_isr_1 (inCompiler)) {
      case 1: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      } break ;
      case 2: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_SOURCE_FILE_AT_LINE (156)) ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (156)) ;
        //-------- @nonterminalInstructionForGeneration
        nt_timing_5F_prot_5F_attrs_parse (inCompiler) ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (179)) ;
      } break ;
      default:
        break ;
      }
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (181)) ;
    } break ;
    case 7: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ACCESSING_5F_APPLICATION) COMMA_SOURCE_FILE_AT_LINE (184)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (184)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (184)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (184)) ;
    } break ;
    case 8: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_SOURCE) COMMA_SOURCE_FILE_AT_LINE (188)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (188)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (188)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (190)) ;
    } break ;
    case 9: {
      //-------- @nonterminalInstructionForGeneration
      nt_free_5F_field_parse (inCompiler) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (192)) ;
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


