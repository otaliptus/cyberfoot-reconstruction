// Address: 004ef2bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef2bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004ef304;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0040bdc0(&local_8,param_2,param_3,SUB108((float10)param_4,0),
               (short)((unkuint10)(float10)param_4 >> 0x40));
  FUN_00466238(param_1,local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004ef30b;
  puStack_14 = (undefined1 *)0x4ef303;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

