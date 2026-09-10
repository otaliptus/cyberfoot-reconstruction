// Address: 00421ec8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00421ec8(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int local_14;
  
  puVar2 = (undefined *)FUN_004039cc(param_2);
  do {
    if (puVar2 == PTR_PTR_0041b84c) {
      if (*(int *)(param_1 + 0x74) == 0) {
        uVar4 = FUN_0041d4ec(param_3);
      }
      else {
        uVar4 = FUN_0041d3ec(*(int *)(param_1 + 0x74),param_3);
      }
      return uVar4;
    }
    psVar3 = (short *)FUN_0041d474(puVar2);
    if ((psVar3 != (short *)0x0) && (iVar5 = (int)*psVar3, -1 < iVar5 + -1)) {
      local_14 = 0;
      do {
        uVar4 = **(undefined4 **)(psVar3 + local_14 * 2 + 1);
        cVar1 = FUN_004039e8(uVar4,param_3);
        if (cVar1 != '\0') {
          return uVar4;
        }
        local_14 = local_14 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar2 = (undefined *)FUN_00403a10(puVar2);
  } while( true );
}

