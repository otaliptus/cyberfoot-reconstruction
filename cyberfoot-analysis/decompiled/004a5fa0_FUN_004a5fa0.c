// Address: 004a5fa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a5fa0(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_004032a8(param_4,0x40,0);
  uVar1 = FUN_004027fc(param_3);
  *(undefined4 *)(param_4 + 0x38) = uVar1;
  *(undefined4 *)(param_4 + 0x3c) = param_1;
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_4 + 0x10) = param_3;
  FUN_0049e158(param_4,param_2,"1.2.3",0x38);
  return;
}

