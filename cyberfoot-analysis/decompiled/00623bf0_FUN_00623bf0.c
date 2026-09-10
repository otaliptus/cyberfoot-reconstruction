// Address: 00623bf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00623bf0(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar2 = PTR_DAT_0066af90;
  iVar5 = *(int *)(PTR_DAT_0066af90 + 0xc0);
  if (*(int *)(PTR_DAT_0066af90 + 0xd8) == iVar5) {
    iVar4 = iVar5;
    iVar5 = *(int *)(PTR_DAT_0066af90 + 0xc4);
  }
  else {
    iVar4 = *(int *)(PTR_DAT_0066af90 + 0xc4);
  }
  iVar7 = *(int *)(PTR_DAT_0066af90 + 0xf0);
  if (iVar7 == *(int *)(PTR_DAT_0066af90 + 0x108)) {
    iVar3 = iVar7;
    iVar7 = *(int *)(PTR_DAT_0066af90 + 0xf4);
  }
  else {
    iVar3 = *(int *)(PTR_DAT_0066af90 + 0xf4);
  }
  if (3 < *(int *)(PTR_DAT_0066ac78 + 0x1a8)) {
    puVar6 = &DAT_00623ec4;
    FUN_006494f8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)(PTR_DAT_0066af90 + 0xd8) * 0x2f8),
                 *(undefined4 *)(PTR_DAT_0066af90 + 0xd8),0x32,&DAT_00623ec4,iVar7);
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c8 + *(int *)(puVar2 + 0xd8) * 0x2f8);
    *piVar1 = *piVar1 + 0x1e;
    if (*(int *)(puVar2 + 0xd8) < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 0xd8) * 0x2f8) =
           (longlong)
           ROUND((float10)*(longlong *)
                           (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 0xd8) * 0x2f8) +
                 _DAT_00623ec8);
    }
    if ((*(int *)(puVar2 + 0xc0) == *(int *)(puVar2 + 0xd8)) &&
       (*(int *)(puVar2 + 0xc4) < *(int *)(PTR_DAT_0066ac78 + 0x3c))) {
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 0xc4) * 0x2f8) =
           (longlong)
           ROUND((float10)*(longlong *)
                           (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 0xc4) * 0x2f8) +
                 _DAT_00623ed4);
    }
    if ((*(int *)(puVar2 + 0xc4) == *(int *)(puVar2 + 0xd8)) &&
       (*(int *)(puVar2 + 0xc0) < *(int *)(PTR_DAT_0066ac78 + 0x3c))) {
      *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 0xc0) * 0x2f8) =
           (longlong)
           ROUND((float10)*(longlong *)
                           (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 0xc0) * 0x2f8) +
                 _DAT_00623ed4);
    }
    if (*(int *)(puVar2 + 0xc0) == *(int *)(puVar2 + 0xd8)) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c8 + *(int *)(puVar2 + 0xc4) * 0x2f8);
      *piVar1 = *piVar1 + 0xf;
    }
    else {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c8 + *(int *)(puVar2 + 0xc0) * 0x2f8);
      *piVar1 = *piVar1 + 0xf;
    }
    if (*(int *)(puVar2 + 0xf0) == *(int *)(puVar2 + 0x108)) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c8 + *(int *)(puVar2 + 0xf4) * 0x2f8);
      *piVar1 = *piVar1 + 10;
    }
    else {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2c8 + *(int *)(puVar2 + 0xf0) * 0x2f8);
      *piVar1 = *piVar1 + 10;
    }
    iVar7 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)(puVar2 + 0xd8) * 0x2f8);
    if (-1 < iVar7) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b718 + 0x58 + iVar7 * 0x80);
      *piVar1 = *piVar1 + 1;
    }
    FUN_00657674(5,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    FUN_0064c36c(5,iVar4,0xffffffff,1,0xffffffff,0xffffffff,0xffffffff);
    FUN_0064c36c(5,iVar5,0xffffffff,2,0xffffffff,0xffffffff,0xffffffff);
    FUN_0064c36c(5,iVar3,0xffffffff,3,0xffffffff,0xffffffff,0xffffffff);
    FUN_0064c36c(5,puVar6,0xffffffff,4,0xffffffff,0xffffffff,0xffffffff);
    FUN_0064c4bc(5,iVar4,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar4 * 0x2f8),0xffffffff
                 ,1,0xffffffff);
    FUN_0064c4bc(5,iVar5,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar5 * 0x2f8),0xffffffff
                 ,2,0xffffffff);
  }
  return;
}

