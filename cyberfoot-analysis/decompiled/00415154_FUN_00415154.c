// Address: 00415154
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00415154(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0041520a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar1 = FUN_00404ff0(param_2);
  uVar4 = 0;
  uVar3 = 0x400;
  uVar2 = (**(code **)PTR_DAT_0066b4d4)();
  FUN_00411994(uVar2,CONCAT22(extraout_var_00,0xb),CONCAT22(extraout_var,8),param_1,uVar3,uVar4,
               uVar1);
  if (DAT_0066245c != '\0') {
    if (DAT_0066245c == '\x01') {
      FUN_00404b6c(&local_c,*param_2);
      FUN_004095ec(local_c,&local_8);
      FUN_004051d4(param_2,local_8);
    }
    else if (DAT_0066245c == '\x02') {
      FUN_00404b6c(&local_14,*param_2);
      FUN_004095b0(local_14,&local_10);
      FUN_004051d4(param_2,local_10);
    }
    else {
      FUN_0041159c();
    }
  }
  *in_FS_OFFSET = param_1;
  FUN_004048f8(&local_14,4,uVar4,&LAB_00415211);
  return;
}

