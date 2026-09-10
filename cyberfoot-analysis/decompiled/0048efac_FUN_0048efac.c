// Address: 0048efac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048efac(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_1c;
  int iStack_18;
  int *local_14;
  undefined4 *local_10;
  
  iVar1 = param_1[0x6f];
  if ((((param_1[100] != 0) || (param_1[0x65] != 0x3f)) || (param_1[0x66] != 0)) ||
     (param_1[0x67] != 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7a;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  local_10 = (undefined4 *)(iVar1 + 0x14);
  local_14 = param_1 + 0x53;
  for (local_1c = 0; local_1c < param_1[0x52]; local_1c = local_1c + 1) {
    iVar3 = *(int *)(*local_14 + 0x14);
    iVar2 = *(int *)(*local_14 + 0x18);
    FUN_0048f0e4(param_1,1,iVar3,iVar1 + 0x28 + iVar3 * 4);
    FUN_0048f0e4(param_1,0,iVar2,iVar1 + 0x38 + iVar2 * 4);
    *local_10 = 0;
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
  }
  puVar4 = (undefined4 *)(iVar1 + 0x48);
  piVar5 = param_1 + 0x5a;
  for (iStack_18 = 0; iStack_18 < param_1[0x59]; iStack_18 = iStack_18 + 1) {
    iVar3 = param_1[*piVar5 + 0x53];
    *puVar4 = *(undefined4 *)(iVar1 + 0x28 + *(int *)(iVar3 + 0x14) * 4);
    puVar4[10] = *(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar3 + 0x18) * 4);
    if (*(int *)(iVar3 + 0x30) == 0) {
      puVar4[0x1e] = 0;
      puVar4[0x14] = 0;
    }
    else {
      puVar4[0x14] = 1;
      puVar4[0x1e] = (uint)(1 < *(int *)(iVar3 + 0x24));
    }
    puVar4 = puVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x24) = param_1[0x45];
  return;
}

