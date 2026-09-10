// Address: 004a7510
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a7510(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  iVar3 = FUN_004a6428(param_1);
  cVar1 = *(char *)(iVar3 + 0x461);
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(iVar3 + 0x4b + (uint)*(byte *)(param_1 + 0x16) * 4);
    uVar7 = FUN_004080a4(uVar2,uVar2,uVar2);
  }
  else if (cVar1 == '\x02') {
    uVar7 = FUN_004080a4(*(undefined1 *)
                          (*(int *)(iVar3 + 0xc) + 0x13d + (uint)*(byte *)(param_1 + 0x16)),
                         CONCAT31((int3)((uint)*(int *)(iVar3 + 0xc) >> 8),
                                  *(undefined1 *)
                                   (*(int *)(iVar3 + 0xc) + 0x13d + (uint)*(byte *)(param_1 + 0x18))
                                 ),
                         *(undefined1 *)
                          (*(int *)(iVar3 + 0xc) + 0x13d + (uint)*(byte *)(param_1 + 0x1a)));
  }
  else if (cVar1 == '\x03') {
    uVar4 = FUN_004a63c4(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x138),PTR_PTR_004a5724);
    uVar4 = FUN_00403c34(uVar4,PTR_PTR_004a5724);
    iVar3 = *(int *)(param_1 + 8);
    if (-1 < iVar3 + -1) {
      iVar6 = 0;
      do {
        if (*(char *)(param_1 + 0x15 + iVar6) == '\0') {
          uVar5 = FUN_004a9980(uVar4,iVar6);
          uVar7 = FUN_004080a4(uVar5 >> 0x10 & 0xff,uVar5 >> 8 & 0xff,uVar5 & 0xff);
          return uVar7;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return uVar7;
}

