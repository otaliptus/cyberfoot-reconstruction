// Address: 004aef34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

int FUN_004aef34(int param_1,char param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *puVar3;
  int *in_FS_OFFSET;
  byte bVar4;
  undefined4 auStack_17f4 [1524];
  undefined4 local_18;
  undefined4 local_8;
  
  bVar4 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  puVar3 = param_3 + (uint)bVar4 * -2 + 1;
  local_18 = *param_3;
  *(undefined4 *)((int)&stack0xffffffec + (uint)bVar4 * 0xfffffffe * 4) = *puVar3;
  *(undefined4 *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar3[(uint)bVar4 * -2 + 1];
  *(undefined4 *)
   ((int)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  local_8 = 0;
  uVar1 = GdipCreateLineBrushFromRect();
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_004aed98(param_1,local_8);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = (int)&stack0xffffffe8;
  }
  return param_1;
}

