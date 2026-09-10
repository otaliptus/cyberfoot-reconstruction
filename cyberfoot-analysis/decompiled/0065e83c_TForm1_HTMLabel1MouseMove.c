// Address: 0065e83c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_HTMLabel1MouseMove(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar1;
  undefined *puVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0065e89d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = &DAT_0065e8b0;
  pwVar1 = L"</u>";
  FUN_00405330(&local_8,3,param_3,L"</u>",*(undefined4 *)(param_2 + 0x198));
  FUN_00545088(param_2,local_8);
  FUN_00466414(param_2,CONCAT22(extraout_var,0xffeb));
  *in_FS_OFFSET = pwVar1;
  FUN_00404ff0(&local_8,pwVar1,puVar2,&LAB_0065e8a4);
  return;
}

