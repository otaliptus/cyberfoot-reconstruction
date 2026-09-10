// Address: 005e3aa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm83_combo1Change(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  uVar2 = 0xffffffff;
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x328),param_2,param_3,0xffffffff,0xffffffff);
  DAT_006d34d8 = FUN_0064dee4(1,*(undefined4 *)
                                 (*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d34d4 * 0x294),iVar1 + 1
                              ,uVar2,uVar3);
  FUN_005e2b18(param_1);
  return;
}

