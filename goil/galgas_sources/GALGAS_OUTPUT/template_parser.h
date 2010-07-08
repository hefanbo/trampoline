//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'template_parser.h'                          *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 27th, 2010, at 20h10'12"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef template_parser_ENTITIES_DEFINED
#define template_parser_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "template_scanner.h"

//---------------------------------------------------------------------------*

#include "template_invocation.h"
#include "goil_routines.h"
#include "goil_basic_types.h"
#include "template_semantics.h"

//---------------------------------------------------------------------------*

class GALGAS_goilTemplateVariableMap ;
class GALGAS_lstring ;
class GALGAS_string ;
class GALGAS_goilTemplateType ;
class GALGAS_goilTemplateValue ;
class GALGAS_stringlist ;
class GALGAS_bool ;
class GALGAS_prefix_5F_map ;
class GALGAS_stringset ;
class GALGAS_lstringlist ;
class GALGAS_basic_5F_type ;
class GALGAS_uint ;
class GALGAS_uint_36__34_ ;
class GALGAS_luint_36__34_ ;
class GALGAS_lbool ;
class GALGAS_uint_36__34__5F_class ;
class GALGAS_goilTemplateFieldMapList ;
class GALGAS_goilTemplateFieldMap ;
class GALGAS_object ;
class GALGAS_type ;
class GALGAS_enumerable ;
class GALGAS_class ;
class GALGAS_struct ;
class GALGAS_enum ;
class GALGAS_mapproxy ;
class GALGAS_location ;
class GALGAS_functionlist ;
class GALGAS_function ;
class GALGAS_typelist ;
class GALGAS_objectlist ;
class GALGAS_binaryset ;
class GALGAS_uint_36__34_list ;
class GALGAS_luint ;
class GALGAS_lsint ;
class GALGAS_sint ;
class GALGAS_lsint_36__34_ ;
class GALGAS_sint_36__34_ ;
class GALGAS_lchar ;
class GALGAS_char ;
class GALGAS_ldouble ;
class GALGAS_double ;
class GALGAS_number_5F_set ;
class GALGAS_imp_5F_type ;
class GALGAS_oil_5F_obj ;
class GALGAS_autostart_5F_obj ;
class GALGAS_list ;
class GALGAS_sortedlist ;
class GALGAS_map ;
class GALGAS_listmap ;
class GALGAS_data ;
class GALGAS_imp_5F_sca_5F_type ;
class GALGAS_imp_5F_obj_5F_ref ;
class GALGAS_void_5F_type ;
class GALGAS_list_5F_uint_33__32_ ;
class GALGAS_list_5F_sint_33__32_ ;
class GALGAS_list_5F_uint_36__34_ ;
class GALGAS_list_5F_sint_36__34_ ;
class GALGAS_ident_5F_list ;
class GALGAS_goilTemplateTypeList ;
class GALGAS_goilTemplateExpressionList ;
class GALGAS_goilTemplateEnumationList ;
class GALGAS_luintlist ;
class GALGAS_uintlist ;
class GALGAS_ident_5F_map ;
class GALGAS_stringMap ;
class GALGAS_lstringMap ;
class GALGAS_stringset_5F_map ;
class GALGAS_ident_5F_list_5F_map ;
class GALGAS_uint_33__32__5F_set ;
class GALGAS_sint_33__32__5F_set ;
class GALGAS_uint_36__34__5F_set ;
class GALGAS_sint_36__34__5F_set ;
class GALGAS_float_5F_set ;
class GALGAS_sint_33__32__5F_empty_5F_set ;
class GALGAS_sint_33__32__5F_range ;
class GALGAS_sint_33__32__5F_list ;
class GALGAS_sint_36__34__5F_empty_5F_set ;
class GALGAS_sint_36__34__5F_range ;
class GALGAS_sint_36__34__5F_list ;
class GALGAS_uint_33__32__5F_empty_5F_set ;
class GALGAS_uint_33__32__5F_range ;
class GALGAS_uint_33__32__5F_list ;
class GALGAS_uint_36__34__5F_empty_5F_set ;
class GALGAS_uint_36__34__5F_range ;
class GALGAS_uint_36__34__5F_list ;
class GALGAS_autostart_5F_void ;
class GALGAS_autostart_5F_false ;
class GALGAS_void ;
class GALGAS_uint_33__32__5F_class ;
class GALGAS_sint_33__32__5F_class ;
class GALGAS_sint_36__34__5F_class ;
class GALGAS_float_5F_class ;
class GALGAS_string_5F_class ;
class GALGAS_bool_5F_class ;
class GALGAS_void_5F_bool_5F_class ;
class GALGAS_auto_5F_bool_5F_class ;
class GALGAS_void_5F_float_5F_class ;
class GALGAS_float_5F_empty_5F_set ;
class GALGAS_uint_33__32__5F_type ;
class GALGAS_sint_33__32__5F_type ;
class GALGAS_uint_36__34__5F_type ;
class GALGAS_sint_36__34__5F_type ;
class GALGAS_void_5F_sint_33__32__5F_class ;
class GALGAS_auto_5F_sint_33__32__5F_class ;
class GALGAS_void_5F_sint_36__34__5F_class ;
class GALGAS_auto_5F_sint_36__34__5F_class ;
class GALGAS_void_5F_string_5F_class ;
class GALGAS_auto_5F_string_5F_class ;
class GALGAS_void_5F_uint_33__32__5F_class ;
class GALGAS_auto_5F_uint_33__32__5F_class ;
class GALGAS_void_5F_uint_36__34__5F_class ;
class GALGAS_auto_5F_uint_36__34__5F_class ;

//---------------------------------------------------------------------------*
//                                                                           *
//                Parser class 'template_parser' declaration                 *
//                                                                           *
//---------------------------------------------------------------------------*

class cParser_template_5F_parser {
//--- Virtual destructor
  public : virtual ~ cParser_template_5F_parser (void) {}

//--- Non terminal declarations
  protected : virtual void nt_expression_ (GALGASap_string constinArgument0,
                                           GALGASap_string constinArgument1,
                                           GALGASap_string constinArgument2,
                                           GALGASap_goilTemplateVariableMap constinArgument3,
                                           GALGASap_goilTemplateValue & outArgument4,
                                           GALGASap_goilTemplateType & outArgument5,
                                           C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_goil_5F_template_5F_start_5F_symbol_ (GALGASap_string constinArgument0,
                                                                    GALGASap_string constinArgument1,
                                                                    GALGASap_string constinArgument2,
                                                                    GALGASap_goilTemplateVariableMap inArgument3,
                                                                    GALGASap_string & ioArgument4,
                                                                    C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_instruction_ (GALGASap_string constinArgument0,
                                                        GALGASap_string constinArgument1,
                                                        GALGASap_string constinArgument2,
                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                        GALGASap_string & ioArgument4,
                                                        C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_instruction_parse (C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_instruction_5F_list_ (GALGASap_string constinArgument0,
                                                                GALGASap_string constinArgument1,
                                                                GALGASap_string constinArgument2,
                                                                GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                GALGASap_string & ioArgument4,
                                                                C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_instruction_5F_list_parse (C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_variable_5F_or_5F_here_ (GALGASap_goilTemplateVariableMap constinArgument0,
                                                       GALGASap_location & outArgument1,
                                                       C_Lexique_template_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_variable_5F_or_5F_here_parse (C_Lexique_template_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_template_5F_parser_template_5F_instruction_i0_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i0_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i1_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i1_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i2_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i2_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i3_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i3_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i4_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i4_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_5F_list_i5_ (GALGASap_string constinArgument0,
                                                                                GALGASap_string constinArgument1,
                                                                                GALGASap_string constinArgument2,
                                                                                GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                                GALGASap_string & ioArgument4,
                                                                                C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_5F_list_i5_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_goil_5F_template_5F_start_5F_symbol_i6_ (GALGASap_string constinArgument0,
                                                                                    GALGASap_string constinArgument1,
                                                                                    GALGASap_string constinArgument2,
                                                                                    GALGASap_goilTemplateVariableMap inArgument3,
                                                                                    GALGASap_string & ioArgument4,
                                                                                    C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i7_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i7_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i8_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i8_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i9_ (GALGASap_string constinArgument0,
                                                                        GALGASap_string constinArgument1,
                                                                        GALGASap_string constinArgument2,
                                                                        GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                        GALGASap_string & ioArgument4,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i9_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i10_ (GALGASap_string constinArgument0,
                                                                         GALGASap_string constinArgument1,
                                                                         GALGASap_string constinArgument2,
                                                                         GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                         GALGASap_string & ioArgument4,
                                                                         C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i10_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_variable_5F_or_5F_here_i11_ (GALGASap_goilTemplateVariableMap constinArgument0,
                                                                        GALGASap_location & outArgument1,
                                                                        C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_variable_5F_or_5F_here_i11_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i12_ (GALGASap_string constinArgument0,
                                                                         GALGASap_string constinArgument1,
                                                                         GALGASap_string constinArgument2,
                                                                         GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                         GALGASap_string & ioArgument4,
                                                                         C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i12_parse (C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i13_ (GALGASap_string constinArgument0,
                                                                         GALGASap_string constinArgument1,
                                                                         GALGASap_string constinArgument2,
                                                                         GALGASap_goilTemplateVariableMap & ioArgument3,
                                                                         GALGASap_string & ioArgument4,
                                                                         C_Lexique_template_5F_scanner * inLexique) ;

  protected : void rule_template_5F_parser_template_5F_instruction_i13_parse (C_Lexique_template_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual PMSInt32 select_template_5F_parser_0 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_1 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_2 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_3 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_4 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_5 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_6 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_7 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_8 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_9 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_10 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_11 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_12 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_13 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_14 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_15 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_16 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_17 (C_Lexique_template_5F_scanner *) = 0 ;

  protected : virtual PMSInt32 select_template_5F_parser_18 (C_Lexique_template_5F_scanner *) = 0 ;


} ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif