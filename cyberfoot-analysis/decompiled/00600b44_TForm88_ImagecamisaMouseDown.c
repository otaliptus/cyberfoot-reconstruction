// Address: 00600b44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_ImagecamisaMouseDown(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403c34(param_2,PTR_PTR_004386b8);
  if (*(int *)(iVar1 + 0xc) < 0xb) {
    FUN_00403c34(param_2,PTR_PTR_004386b8);
    *(undefined2 *)(iVar1 + 0x7a) = 1;
  }
  FUN_00403c34(param_2,PTR_PTR_004386b8);
  if (0xb < *(int *)(iVar1 + 0xc)) {
    FUN_00403c34(param_2,PTR_PTR_004386b8);
    *(undefined2 *)(iVar1 + 0x7a) = 3;
  }
  FUN_00403c34(param_2,PTR_PTR_004386b8);
  if (*(int *)(iVar1 + 0xc) == 0xb) {
    FUN_00403c34(param_2,PTR_PTR_004386b8);
    *(undefined2 *)(iVar1 + 0x7a) = 2;
  }
  FUN_00403c34(param_2,PTR_PTR_004386b8);
  FUN_004668c0(iVar1,1,0xffffffff);
  return;
}

