// Address: 00521524
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00521524(int param_1,char param_2,int *param_3,undefined2 param_4,undefined4 *param_5,
                undefined4 param_6,undefined4 param_7)

{
  int *extraout_ECX;
  char extraout_DL;
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  byte bVar2;
  undefined4 auStackY_17f1 [1516];
  undefined4 uStack_34;
  undefined4 local_15;
  undefined4 auStack_11 [3];
  char local_5;
  
  bVar2 = 0;
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puVar1 = param_5 + (uint)bVar2 * -2 + 1;
  local_15 = *param_5;
  auStack_11[(uint)bVar2 * -2] = *puVar1;
  auStack_11[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] = puVar1[(uint)bVar2 * -2 + 1];
  (auStack_11 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (puVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  FUN_00521590(param_1,0,param_7,CONCAT22((short)((uint)&local_15 >> 0x10),param_4),&local_15,
               param_6);
  *(int **)(param_1 + 0x7c) = param_3;
  if (param_3 != (int *)0x0) {
    *param_3 = param_1;
  }
  if (local_5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_34;
  }
  return param_1;
}

