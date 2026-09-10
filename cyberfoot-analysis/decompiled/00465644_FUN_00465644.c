// Address: 00465644
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00465644(int *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  *(ushort *)(param_1 + 0x15) = *(ushort *)(param_1 + 0x15) | 8;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  cVar2 = FUN_00403c10(uVar1,PTR_PTR_00461f94);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,uVar1);
  }
  FUN_004272b8(param_1,param_2);
  *(ushort *)(param_1 + 0x15) = *(ushort *)(param_1 + 0x15) & 0xfff7;
  if (param_1[0xc] != 0) {
    FUN_004673cc(param_1,0xb009,0,0);
    FUN_004673cc(param_1,0xb008,0,0);
    FUN_004673cc(param_1,0xb023,0,0);
    FUN_004673cc(param_1,0xb035,0,0);
    FUN_004673cc(param_1,0xb03d,0,0);
  }
  return;
}

