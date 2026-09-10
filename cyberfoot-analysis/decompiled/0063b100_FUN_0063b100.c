// Address: 0063b100
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063b100(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_0066af70;
  puVar2 = PTR_DAT_0066ac78;
  if (DAT_006d52e0 + DAT_006d52e4 < DAT_006d52e8) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x22c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = 3;
  }
  else if (DAT_006d52e0 + DAT_006d52e8 < DAT_006d52e4) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x22c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = 2;
  }
  else if (DAT_006d52e8 < DAT_006d52e0) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x22c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = 1;
  }
  else {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x22c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = 2;
  }
  if ((4 < DAT_006d52e0) && (*(int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8) == 3))
  {
    *(undefined4 *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8) = 2;
  }
  if ((7 < DAT_006d52e4) && (*(int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8) == 3))
  {
    *(undefined4 *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8) = 2;
  }
  if ((*(int *)(*(int *)puVar3 + 0x238 + *(int *)(puVar2 + 8) * 0x2f8) == 1) &&
     (iVar4 = FUN_004032c8(100), 0x32 < iVar4)) {
    piVar1 = (int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + -1;
    piVar1 = (int *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + 3;
  }
  if ((*(int *)(*(int *)puVar3 + 0x238 + *(int *)(puVar2 + 8) * 0x2f8) == 2) &&
     (iVar4 = FUN_004032c8(100), 0x28 < iVar4)) {
    piVar1 = (int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + -1;
    piVar1 = (int *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + 3;
  }
  if ((*(int *)(*(int *)puVar3 + 0x238 + *(int *)(puVar2 + 8) * 0x2f8) == 3) &&
     (iVar4 = FUN_004032c8(100), 0x14 < iVar4)) {
    piVar1 = (int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + -1;
    piVar1 = (int *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + 4;
  }
  if ((*(int *)(*(int *)puVar3 + 0x238 + *(int *)(puVar2 + 8) * 0x2f8) == 4) &&
     (iVar4 = FUN_004032c8(100), 5 < iVar4)) {
    piVar1 = (int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + -1;
    piVar1 = (int *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + 5;
  }
  *(undefined4 *)(*(int *)puVar3 + 0x238 + *(int *)(puVar2 + 8) * 0x2f8) = 0;
  if (1 < *(int *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8)) {
    piVar1 = (int *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + -1;
  }
  if (*(int *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8) == 1) {
    piVar1 = (int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8);
    *piVar1 = *piVar1 + 1;
    *(undefined4 *)(*(int *)puVar3 + 0x230 + *(int *)(puVar2 + 8) * 0x2f8) = 0;
  }
  if (3 < *(int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8)) {
    *(undefined4 *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8) = 3;
  }
  if (*(int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8) < 1) {
    *(undefined4 *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8) = 1;
  }
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x2fc),0);
  iVar4 = *(int *)(*(int *)puVar3 + 0x22c + *(int *)(puVar2 + 8) * 0x2f8);
  if (iVar4 == 1) {
    FUN_00404928(*(int *)(param_1 + 0x2fc) + 0x80,"Moral do time: Ruim");
  }
  else if (iVar4 == 2) {
    FUN_00404928(*(int *)(param_1 + 0x2fc) + 0x80,"Moral do time: Boa");
  }
  else if (iVar4 == 3) {
    FUN_00404928(*(int *)(param_1 + 0x2fc) + 0x80,"Moral do time: Excelente");
  }
  return;
}

