// Address: 004f5450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f5450(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 fVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_004f54ba;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  fVar2 = (float10)(double)CONCAT44(param_5,param_4);
  FUN_0040bdc0(&local_c,param_2,param_3,SUB104(fVar2,0),(int)((unkuint10)fVar2 >> 0x20),
               (short)((unkuint10)fVar2 >> 0x40));
  FUN_004051d4(&local_8,local_c);
  (**(code **)(*param_1 + 0x30))(param_1,local_8);
  FUN_004f71fc(param_1);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f54c1;
  puStack_18 = (undefined1 *)0x4f54b1;
  FUN_004048d4(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x4f54b9;
  FUN_00404ff0(&local_8);
  return;
}

