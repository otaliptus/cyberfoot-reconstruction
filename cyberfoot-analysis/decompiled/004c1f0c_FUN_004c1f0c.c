// Address: 004c1f0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c1f0c(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 auStack_17f8 [1525];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 auStack_18 [3];
  
  bVar4 = 0;
  cVar1 = FUN_0040dad0(param_1,local_24);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    FUN_004c1fc4(&local_1c);
    puVar3 = param_2 + (uint)bVar4 * -2 + 1;
    *param_2 = local_1c;
    *puVar3 = auStack_18[(uint)bVar4 * -2];
    puVar3[(uint)bVar4 * -2 + 1] = auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (auStack_18 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    cVar2 = FUN_004c1ecc(param_2);
  }
  if (cVar2 == '\0') {
    puVar3 = param_2 + (uint)bVar4 * -2 + 1;
    *param_2 = DAT_00669594;
    *puVar3 = (&DAT_00669598)[(uint)bVar4 * -2];
    puVar3[(uint)bVar4 * -2 + 1] = (&DAT_0066959c)[(uint)bVar4 * -2 + (uint)bVar4 * -2];
    (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (&DAT_0066959c + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1];
  }
  return;
}

