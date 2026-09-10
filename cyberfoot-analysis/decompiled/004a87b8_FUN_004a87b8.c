// Address: 004a87b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x004a88b6) */

void FUN_004a87b8(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_c;
  
  cVar1 = **(char **)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4);
  if (cVar1 == '\x01') {
    uVar5 = *(int *)(param_1 + 0x24) + 1;
    if (uVar5 <= *(uint *)(param_1 + 0x20)) {
      iVar7 = (*(uint *)(param_1 + 0x20) - uVar5) + 1;
      do {
        iVar6 = *(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4);
        *(char *)(iVar6 + uVar5) =
             *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) +
                      (uVar5 - *(int *)(param_1 + 0x24))) + *(char *)(iVar6 + uVar5);
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (cVar1 == '\x02') {
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 != 0) {
      iVar6 = 1;
      do {
        *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6) =
             *(char *)(*(int *)(param_1 + 0x40 + ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) +
                      iVar6) +
             *(char *)(*(int *)(param_1 + 0x40 + (*(byte *)(param_1 + 0x48) & 0x7f) * 4) + iVar6);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (cVar1 == '\x03') {
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 != 0) {
      iVar6 = 1;
      do {
        if (iVar6 - 1U < *(uint *)(param_1 + 0x24)) {
          local_c = 0;
        }
        else {
          local_c = (uint)*(byte *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) +
                                   (iVar6 - *(int *)(param_1 + 0x24)));
        }
        *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6) =
             (char)((int)(*(byte *)(*(int *)(param_1 + 0x40 +
                                            ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) + iVar6) +
                         local_c) >> 1) +
             *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (cVar1 == '\x04') {
    uVar2 = 0;
    uVar3 = 0;
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 != 0) {
      iVar6 = 1;
      do {
        if (*(uint *)(param_1 + 0x24) <= iVar6 - 1U) {
          uVar2 = *(undefined1 *)
                   (*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) +
                   (iVar6 - *(int *)(param_1 + 0x24)));
          uVar3 = *(undefined1 *)
                   (*(int *)(param_1 + 0x40 + ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) +
                   (iVar6 - *(int *)(param_1 + 0x24)));
        }
        cVar1 = *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6);
        cVar4 = FUN_004a5ca8(uVar2,*(undefined1 *)
                                    (*(int *)(param_1 + 0x40 +
                                             ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4) + iVar6),
                             uVar3);
        *(char *)(*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + iVar6) =
             cVar4 + cVar1;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

