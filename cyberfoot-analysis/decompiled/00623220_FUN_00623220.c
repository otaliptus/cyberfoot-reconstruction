// Address: 00623220
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00623220(void)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066af90;
  if (*(int *)(PTR_DAT_0066ac78 + 0x1a8) == 2) {
    *(undefined4 *)(PTR_DAT_0066af90 + 100) = *(undefined4 *)(PTR_DAT_0066af90 + 0x18);
    *(undefined4 *)(puVar1 + 0x94) = *(undefined4 *)(puVar1 + 0x48);
    iVar3 = 2;
    piVar2 = (int *)(puVar1 + 0x18);
    do {
      if (piVar2[-6] == *piVar2) {
        FUN_006490a8(piVar2[-5],10,5,0xffffffff);
      }
      else {
        FUN_006490a8(piVar2[-6],10,5,0xffffffff);
      }
      piVar2 = piVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x1a8);
  if (iVar3 == 3) {
    *(undefined4 *)(puVar1 + 0xc0) = *(undefined4 *)(puVar1 + 0x78);
    *(undefined4 *)(puVar1 + 0xc4) = *(undefined4 *)(puVar1 + 0xa8);
    if (*(int *)(puVar1 + 0x60) == *(int *)(puVar1 + 0x78)) {
      *(undefined4 *)(puVar1 + 0xf0) = *(undefined4 *)(puVar1 + 100);
    }
    else {
      *(int *)(puVar1 + 0xf0) = *(int *)(puVar1 + 0x60);
    }
    if (*(int *)(puVar1 + 0x90) == *(int *)(puVar1 + 0xa8)) {
      *(undefined4 *)(puVar1 + 0xf4) = *(undefined4 *)(puVar1 + 0x94);
    }
    else {
      *(int *)(puVar1 + 0xf4) = *(int *)(puVar1 + 0x90);
    }
  }
  if (3 < iVar3) {
    if (*(int *)(puVar1 + 0xc0) == *(int *)(puVar1 + 0xd8)) {
      FUN_006490a8(*(undefined4 *)(puVar1 + 0xc4),2,5,0xffffffff);
      FUN_006490a8(*(undefined4 *)(puVar1 + 0xc0),1,5,0xffffffff);
    }
    else {
      FUN_006490a8(*(int *)(puVar1 + 0xc0),2,5,0xffffffff);
      FUN_006490a8(*(undefined4 *)(puVar1 + 0xc4),1,5,0xffffffff);
    }
  }
  if (3 < *(int *)(PTR_DAT_0066ac78 + 0x1a8)) {
    if (*(int *)(puVar1 + 0xf0) == *(int *)(puVar1 + 0x108)) {
      FUN_006490a8(*(undefined4 *)(puVar1 + 0xf4),4,5,0xffffffff);
      FUN_006490a8(*(undefined4 *)(puVar1 + 0xf0),3,5,0xffffffff);
    }
    else {
      FUN_006490a8(*(int *)(puVar1 + 0xf0),4,5,0xffffffff);
      FUN_006490a8(*(undefined4 *)(puVar1 + 0xf4),3,5,0xffffffff);
    }
  }
  return;
}

