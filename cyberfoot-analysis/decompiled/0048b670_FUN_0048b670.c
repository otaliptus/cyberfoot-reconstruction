// Address: 0048b670
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048b670(int param_1,HPALETTE param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  UINT UVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_414 [4];
  tagPALETTEENTRY local_410 [256];
  
  UVar3 = GetPaletteEntries(param_2,0,0x100,(LPPALETTEENTRY)(auStack_414 + 4));
  if (UVar3 != 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,1,UVar3);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    *(UINT *)(param_1 + 0x84) = UVar3;
    if (-1 < (int)(UVar3 - 1)) {
      iVar5 = 0;
      puVar2 = &stack0xfffffbe8;
      do {
        piVar1 = *(int **)(param_1 + 0x88);
        *(undefined1 *)(piVar1[2] + iVar5) = puVar2[4];
        *(undefined1 *)(piVar1[1] + iVar5) = puVar2[5];
        *(undefined1 *)(*piVar1 + iVar5) = puVar2[6];
        iVar5 = iVar5 + 1;
        UVar3 = UVar3 - 1;
        puVar2 = puVar2 + 4;
      } while (UVar3 != 0);
    }
  }
  return;
}

