// Address: 004170d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004170d0(ushort *param_1)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (7 < *param_1) {
    uStack_4 = *(undefined4 *)(param_1 + 6);
    uStack_8 = *(undefined4 *)(param_1 + 4);
    uStack_c = *(undefined4 *)(param_1 + 2);
    uStack_10 = *(undefined4 *)param_1;
    *param_1 = 0;
    FUN_00412164(param_1,&uStack_10);
  }
  return;
}

