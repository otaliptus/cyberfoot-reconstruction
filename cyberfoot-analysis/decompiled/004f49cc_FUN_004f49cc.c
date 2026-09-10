// Address: 004f49cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f49cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 fVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004f4a22;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  fVar2 = (float10)(double)CONCAT44(param_5,param_4);
  FUN_0040bdc0(&local_8,param_2,param_3,SUB104(fVar2,0),(int)((unkuint10)fVar2 >> 0x20),
               (short)((unkuint10)fVar2 >> 0x40));
  FUN_004051d4(param_1 + 0x20,local_8);
  FUN_004f71fc(param_1);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f4a29;
  puStack_14 = (undefined1 *)0x4f4a21;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

