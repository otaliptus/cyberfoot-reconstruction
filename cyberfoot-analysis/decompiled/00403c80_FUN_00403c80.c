// Address: 00403c80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_EDX;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZF;
  undefined4 in_stack_00000000;
  
  FUN_00403c50(*param_1);
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x00403c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,extraout_EDX,param_3);
    return;
  }
  FUN_00402c68(param_1,extraout_EDX,in_stack_00000000);
  return;
}

